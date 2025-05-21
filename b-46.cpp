#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct DN
{
    string ma, ten;
    int sl;
};

bool cmp(DN a, DN b)
{
    return a.sl != b.sl ? a.sl > b.sl : a.ma < b.ma;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<DN> ds(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].ten);
        cin >> ds[i].sl;
        cin.ignore();
    }
    sort(ds.begin(), ds.end(), cmp);
    for (auto d : ds)
        cout << d.ma << " " << d.ten << " " << d.sl << endl;
}
