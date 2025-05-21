#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, res;
        cin >> s;
        for (char c : s)
        {
            res += c;
            while (res.size() >= 3 && res.substr(res.size() - 3) == "100")
                res.erase(res.end() - 3, res.end());
        }
        cout << s.length() - res.length() << endl;
    }
}
