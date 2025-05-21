#include <iostream>
#include <iomanip>
#include <sstream>
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
    res.pop_back(); // xóa khoảng trắng cuối
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
    string maSV = "B20DCCN";
    string ten, lop, ngaysinh;
    float gpa;

    void nhap()
    {
        getline(cin, ten);
        getline(cin, lop);
        getline(cin, ngaysinh);
        cin >> gpa;
        cin.ignore();
    }

    void in()
    {
        string ma = maSV + string(3 - to_string(dem).length(), '0') + to_string(dem++);
        cout << ma << " " << chuanhoaTen(ten) << " " << lop << " "
             << chuanhoaNgay(ngaysinh) << " " << fixed << setprecision(2) << gpa << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    SinhVien a[n];
    for (int i = 0; i < n; i++)
        a[i].nhap();
    for (int i = 0; i < n; i++)
        a[i].in();
    return 0;
}
