#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        set<int> digits;
        while (n--)
        {
            cin >> x;
            while (x)
            {
                digits.insert(x % 10);
                x /= 10;
            }
        }
        for (int d : digits)
            cout << d << " ";
        cout << endl;
    }
    return 0;
}
