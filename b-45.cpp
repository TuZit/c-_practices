#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct SinhVien
{
    string ma, ten, lop, email;
};

bool check_nganh(const string &ma, const string &nganh)
{
    if (nganh == "KE TOAN" && ma.substr(4, 4) == "KT")
        return true;
    if (nganh == "CONG NGHE THONG TIN" && ma.substr(4, 4) == "CN")
        return true;
    if (nganh == "AN TOAN THONG TIN" && ma.substr(4, 4) == "AT")
        return true;
    if (nganh == "VIEN THONG" && ma.substr(4, 4) == "VT")
        return true;
    if (nganh == "DIEN TU" && ma.substr(4, 4) == "DT")
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<SinhVien> ds(n);
    for (int i = 0; i < n; ++i)
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
        string nganh;
        getline(cin, nganh);
        string nganh_upper = nganh;
        for (char &c : nganh_upper)
            c = toupper(c);

        cout << "DANH SACH SINH VIEN NGANH " << nganh_upper << ":\n";
        for (const auto &sv : ds)
        {
            string code = sv.ma.substr(5, 2); 
            if (nganh_upper == "KE TOAN" && sv.ma.substr(5, 2) == "KT")
            {
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
            }
            else if (nganh_upper == "CONG NGHE THONG TIN" && sv.ma.substr(5, 2) == "CN" && sv.lop[0] != 'E')
            {
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
            }
            else if (nganh_upper == "AN TOAN THONG TIN" && sv.ma.substr(5, 2) == "AT" && sv.lop[0] != 'E')
            {
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
            }
            else if (nganh_upper == "VIEN THONG" && sv.ma.substr(5, 2) == "VT")
            {
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
            }
            else if (nganh_upper == "DIEN TU" && sv.ma.substr(5, 2) == "DT")
            {
                cout << sv.ma << " " << sv.ten << " " << sv.lop << " " << sv.email << endl;
            }
        }
    }
    return 0;
}