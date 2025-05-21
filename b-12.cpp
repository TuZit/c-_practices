#include <iostream>
#include <vector>
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
        vector<bool> row(n, false), col(m, false);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
            {
                cin >> a[i][j];
                if (a[i][j] == 1)
                    row[i] = col[j] = true;
            }
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cout << (row[i] || col[j]) << " ";
            cout << endl;
        }
    }
    return 0;
}
