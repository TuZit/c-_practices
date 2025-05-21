#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int dem = 1;

struct NhanVien
{
    string ten, gioitinh, ngaysinh, diachi, maso, ngayki;
    int id;

    string getSortKey() const
    {
        string d = ngaysinh.substr(0, 2);
        string m = ngaysinh.substr(3, 2);
        string y = ngaysinh.substr(6);
        return y + m + d;
    }

    void in() const
    {
        printf("%05d %s %s %s %s %s %s\n", id, ten.c_str(), gioitinh.c_str(), ngaysinh.c_str(), diachi.c_str(), maso.c_str(), ngayki.c_str());
    }
};

bool cmp(NhanVien a, NhanVien b)
{
    return a.getSortKey() < b.getSortKey();
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<NhanVien> ds(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, ds[i].ten);
        getline(cin, ds[i].gioitinh);
        getline(cin, ds[i].ngaysinh);
        getline(cin, ds[i].diachi);
        getline(cin, ds[i].maso);
        getline(cin, ds[i].ngayki);
        ds[i].id = i + 1;
    }
    sort(ds.begin(), ds.end(), cmp);
    for (auto nv : ds)
        nv.in();
    return 0;
}
