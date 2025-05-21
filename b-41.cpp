#include <iostream>
#include <iomanip>
using namespace std;

class NhanVien
{
public:
    string ten, gioitinh, ngaysinh, diachi, maso, ngayki;
    static int dem;

    friend istream &operator>>(istream &in, NhanVien &nv)
    {
        getline(in, nv.ten);
        getline(in, nv.gioitinh);
        getline(in, nv.ngaysinh);
        getline(in, nv.diachi);
        getline(in, nv.maso);
        getline(in, nv.ngayki);
        return in;
    }

    friend ostream &operator<<(ostream &out, const NhanVien &nv)
    {
        out << setw(5) << setfill('0') << dem++ << " " << nv.ten << " " << nv.gioitinh << " "
            << nv.ngaysinh << " " << nv.diachi << " " << nv.maso << " " << nv.ngayki;
        return out;
    }
};
int NhanVien::dem = 1;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    NhanVien ds[n];
    for (int i = 0; i < n; i++)
        cin >> ds[i];
    for (int i = 0; i < n; i++)
        cout << ds[i] << endl;
    return 0;
}
