#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

struct SV
{
    string ma, ten, lop;
    float d1, d2, d3;
};

bool cmp(SV a, SV b)
{
    return a.ma < b.ma;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<SV> ds(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, ds[i].ma);
        getline(cin, ds[i].ten);
        getline(cin, ds[i].lop);
        cin >> ds[i].d1 >> ds[i].d2 >> ds[i].d3;
        cin.ignore();
    }
    sort(ds.begin(), ds.end(), cmp);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " " << ds[i].ma << " " << ds[i].ten << " " << ds[i].lop << " "
             << fixed << setprecision(1) << ds[i].d1 << " " << ds[i].d2 << " " << ds[i].d3 << endl;
    }
    return 0;
}
