#include <iostream>
#include <algorithm>
using namespace std;

class PhanSo
{
    long long tu, mau;

public:
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
    void in()
    {
        cout << tu << "/" << mau;
    }
};

int main()
{
    PhanSo p;
    p.nhap();
    p.rutgon();
    p.in();
    return 0;
}
