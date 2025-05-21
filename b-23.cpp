#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo
{
public:
    long long tu, mau;
    void nhap()
    {
        cin >> tu >> mau;
    }

    void rutgon()
    {
        long long g = __gcd(tu, mau);
        tu /= g;
        mau /= g;
    }

    PhanSo tong(const PhanSo &other)
    {
        PhanSo res;
        res.tu = tu * other.mau + mau * other.tu;
        res.mau = mau * other.mau;
        res.rutgon();
        return res;
    }

    void in()
    {
        cout << tu << "/" << mau;
    }
};

int main()
{
    PhanSo p, q;
    p.nhap();
    q.nhap();
    PhanSo tong = p.tong(q);
    tong.in();
    return 0;
}
