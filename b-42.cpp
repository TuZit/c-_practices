#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct SV
{
    string ma, ten, lop, email;
};

bool cmp(SV a, SV b)
{
    return (a.lop == b.lop) ? a.ma < b.ma : a.lop < b.lop;
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
        getline(cin, ds[i].email);
    }
    sort(ds.begin(), ds.end(), cmp);
    for (auto sv : ds)
        cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
}
