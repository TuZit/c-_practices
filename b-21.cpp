#include <iostream>
using namespace std;

struct NhanVien
{
    string ten, gioitinh, ngaysinh, diachi, masothue, ngayki;
};

int main()
{
    NhanVien nv;
    getline(cin, nv.ten);
    getline(cin, nv.gioitinh);
    getline(cin, nv.ngaysinh);
    getline(cin, nv.diachi);
    getline(cin, nv.masothue);
    getline(cin, nv.ngayki);
    cout << "00001 " << nv.ten << " " << nv.gioitinh << " " << nv.ngaysinh << " " << nv.diachi << " " << nv.masothue << " " << nv.ngayki;
    return 0;
}
