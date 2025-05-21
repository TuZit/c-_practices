#include <iostream>
#include <set>
#include <vector>
#include <map>
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
        map<int, int> freq;
        set<int> bset;
        vector<int> a(n), b(m);
        for (int &x : a)
        {
            cin >> x;
            freq[x]++;
        }
        for (int &x : b)
        {
            cin >> x;
            freq[x]++;
            bset.insert(x);
        }

        vector<int> u, inter;
        for (auto &[x, cnt] : freq)
            u.push_back(x);
        for (int x : bset)
        {
            if (find(a.begin(), a.end(), x) != a.end())
                inter.push_back(x);
        }

        for (int x : u)
            cout << x << " ";
        cout << endl;
        for (int x : inter)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}
