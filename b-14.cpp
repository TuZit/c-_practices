#include <iostream>
#include <set>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    set<int> s;
    while (n--)
    {
        cin >> x;
        s.insert(x);
    }
    for (int i : s)
        cout << i << " ";
    return 0;
}
