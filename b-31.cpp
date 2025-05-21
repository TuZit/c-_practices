#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;

        // Union
        int i = 0, j = 0;
        vector<int> uni, inter;
        while (i < n && j < m)
        {
            if (a[i] < b[j])
                uni.push_back(a[i++]);
            else if (a[i] > b[j])
                uni.push_back(b[j++]);
            else
            {
                uni.push_back(a[i]);
                inter.push_back(a[i]);
                i++;
                j++;
            }
        }
        while (i < n)
            uni.push_back(a[i++]);
        while (j < m)
            uni.push_back(b[j++]);

        for (int x : uni)
            cout << x << " ";
        cout << endl;
        for (int x : inter)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
