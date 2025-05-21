#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin >> x;
        int len = x.length();
        if (len >= 2 && x.substr(len - 2) == "86")
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
