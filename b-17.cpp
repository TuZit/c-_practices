#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long cnt[256] = {};
        for (char c : s)
            cnt[c]++;
        long long res = 0;
        for (int i = 0; i < 256; i++)
            res += cnt[i] + cnt[i] * (cnt[i] - 1) / 2;
        cout << res << endl;
    }
    return 0;
}
