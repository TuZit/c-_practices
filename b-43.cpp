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
    return a.ma < b.ma;
}

int main()
{
    vector<SV> ds;
    SV sv;
    while (getline(cin, sv.ma))
    {
        getline(cin, sv.ten);
        getline(cin, sv.lop);
        getline(cin, sv.email);
        ds.push_back(sv);
    }
    sort(ds.begin(), ds.end(), cmp);
    for (auto s : ds)
        cout << s.ma << " " << s.ten << " " << s.lop << " " << s.email << endl;
}
