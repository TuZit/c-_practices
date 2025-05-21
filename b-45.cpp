#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

string viettat(string s)
{
    stringstream ss(s);
    string word, res;
    while (ss >> word)
        res += toupper(word[0]);
    return res;
}

string tolowercase(string s)
{
    for (char &c : s)
        c = tolower(c);
    return s;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<pair<string, string>> gv(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin, gv[i].first);  // ten
        getline(cin, gv[i].second); // bo mon
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--)
    {
        string keyword;
        getline(cin, keyword);
        keyword = tolowercase(keyword);
        cout << "DANH SACH GIANG VIEN THEO TU KHOA " << keyword << ":\n";
        for (int i = 0; i < n; i++)
        {
            string name = tolowercase(gv[i].first);
            if (name.find(keyword) != string::npos)
                printf("GV%02d %s %s\n", i + 1, gv[i].first.c_str(), viettat(gv[i].second).c_str());
        }
    }
}
