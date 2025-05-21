#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, s;
    cin >> m >> s;
    if ((s == 0 && m > 1) || s > 9 * m)
    {
        cout << "-1 -1";
        return 0;
    }
    string minN(m, '0'), maxN(m, '0');
    int sum = s;
    // Max
    for (int i = 0; i < m; i++)
    {
        int d = min(9, sum);
        maxN[i] = '0' + d;
        sum -= d;
    }
    // Min
    sum = s;
    for (int i = m - 1; i >= 0; i--)
    {
        int d = max(0, sum - 9 * i);
        if (i == 0 && d == 0 && sum > 0)
            d = 1;
        minN[i] = '0' + d;
        sum -= d;
    }
    cout << minN << " " << maxN;
    return 0;
}
