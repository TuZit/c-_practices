#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            freq[x]++;
        }
        int count = 0;
        for (auto p : freq)
            if (p.second > 1)
                count++;
        cout << count << endl;
    }
    return 0;
}
