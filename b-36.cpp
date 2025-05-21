#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
using namespace std;

int dem = 1;

string chuanhoaTen(string s)
{
    stringstream ss(s);
    string word, res;
    while (ss >> word)
    {
        word[0] = toupper(word[0]);
        for (int i = 1; i < word.size(); i++)
            word[i] = tolower(word[i]);
        res += word + " ";
    }
    res.pop_back();
    return res;
}

string chuanhoaNgay(string s)
{
    if (s[1] == '/')
        s = "0" + s;
    if (s[4] == '/')
        s.insert(3, "0");
    return s;
}

struct SinhVien
{
    string ten, lop, ngaysinh;
    float gpa;
    int stt;

    void nhap(int id)
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
        cin.ignore();
        stt = id;
    }

    void in() const
    {
        printf("B20DCCN%03d %s %s %s %.2f\n", stt, chuanhoaTen(ten).c_str(), lop.c_str(), chuanhoaNgay(ngaysinh).c_str(), gpa);
    }
};

bool cmp(SinhVien a, SinhVien b)
{
    return a.gpa > b.gpa;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for (int i = 0; i < n; i++)
        a[i].nhap(i + 1);
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
        a[i].in();
    return 0;
}
