#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<char> chars;
        int sum = 0;
        for (char c : s)
        {
            if (isdigit(c))
                sum += c - '0';
            else
                chars.push_back(c);
        }
        sort(chars.begin(), chars.end());
        for (char c : chars)
            cout << c;
        cout << sum << endl;
    }
    return 0;
}
