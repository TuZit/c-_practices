#include <iostream>
#include <iomanip>
using namespace std;

struct SinhVien
{
    string ten, lop, ngaysinh;
    float gpa;
    string ma;

    void chuanhoa()
    {
        if (ngaysinh[1] == '/')
            ngaysinh = "0" + ngaysinh;
        if (ngaysinh[4] == '/')
            ngaysinh.insert(3, "0");
    }

    void in(int stt)
    {
        cout << "B20DCCN" << setw(3) << setfill('0') << stt << " " << ten << " " << lop << " "
             << ngaysinh << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    SinhVien a[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].ngaysinh);
        cin >> a[i].gpa;
        cin.ignore();
        a[i].chuanhoa();
    }
    for (int i = 0; i < n; i++)
        a[i].in(i + 1);
    return 0;
}
