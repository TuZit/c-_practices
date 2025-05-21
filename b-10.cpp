#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        unordered_set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x > 0)
                s.insert(x);
        }
        int res = 1;
        while (s.count(res))
            res++;
        cout << res << endl;
    }
    return 0;
}
