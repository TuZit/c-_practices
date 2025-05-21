#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string res = "-1";
        for (int i = s.length() - 2; i >= 0; --i)
        {
            for (int j = s.length() - 1; j > i; --j)
            {
                if (s[j] < s[i])
                {
                    swap(s[i], s[j]);
                    res = s;
                    goto done;
                }
            }
        }
    done:
        cout << res << endl;
    }
    return 0;
}
