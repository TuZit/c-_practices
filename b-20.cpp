#include <iostream>
#include <iomanip>
using namespace std;

struct ThiSinh
{
    string ten, ngaysinh;
    float d1, d2, d3;

    void nhap()
    {
        getline(cin >> ws, ten);
        getline(cin, ngaysinh);
        cin >> d1 >> d2 >> d3;
    }

    void in()
    {
        cout << ten << " " << ngaysinh << " " << fixed << setprecision(1) << (d1 + d2 + d3);
    }
};

int main()
{
    ThiSinh ts;
    ts.nhap();
    ts.in();
    return 0;
}
