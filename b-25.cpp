#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n * m; ++i)
            cin >> a[i / m][i % m];

        for (int j = 0; j < m; j++)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
