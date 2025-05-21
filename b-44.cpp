#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct SV
{
    string ma, ten, lop, email;
};

bool checkNgAnh(SV sv, string nganh)
{
    string s = sv.ma.substr(3, 4);
    if ((nganh == "DCCN" || nganh == "DCAT") && sv.lop[0] == 'E')
        return false;
    return s == nganh;
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
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string s;
        getline(cin, s);
        string maNganh;
        if (s == "Ke toan")
            maNganh = "DCKT";
        else if (s == "Cong nghe thong tin")
            maNganh = "DCCN";
        else if (s == "An toan thong tin")
            maNganh = "DCAT";
        else if (s == "Vien thong")
            maNganh = "DCVT";
        else if (s == "Dien tu")
            maNganh = "DCDT";

        cout << "DANH SACH SINH VIEN NGANH " << s << ":\n";
        for (auto sv : ds)
        {
            if (checkNgAnh(sv, maNganh))
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
        }
    }
}
