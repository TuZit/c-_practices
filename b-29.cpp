#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long sum = 0, num = 0;
        for (char c : s)
        {
            if (isdigit(c))
                num = num * 10 + (c - '0');
            else
            {
                sum += num;
                num = 0;
            }
        }
        sum += num;
        cout << sum << endl;
    }
    return 0;
}
