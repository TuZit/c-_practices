#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long minDiff = 1e18;
        for (int i = 1; i < n; i++)
            minDiff = min(minDiff, a[i] - a[i - 1]);
        cout << minDiff << endl;
    }
    return 0;
}
