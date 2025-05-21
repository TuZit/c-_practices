#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a)
            cin >> x;
        int l = 0, r = n - 1, cnt = 0;
        while (l < r)
        {
            if (a[l] == a[r])
            {
                l++;
                r--;
            }
            else if (a[l] < a[r])
            {
                a[l + 1] += a[l];
                l++;
                cnt++;
            }
            else
            {
                a[r - 1] += a[r];
                r--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
