#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iomanip>
using namespace std;

struct SV
{
    string ma, ten, lop;
    float d1, d2, d3;
};

string getLastName(string s)
{
    stringstream ss(s);
    string tmp, res;
    while (ss >> tmp)
        res = tmp;
    return res;
}

bool cmp(SV a, SV b)
{
    string x = getLastName(a.ten), y = getLastName(b.ten);
    return x == y ? a.ma < b.ma : x < y;
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
