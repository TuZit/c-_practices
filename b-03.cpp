#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum = 0, fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
        sum += fact;
    }
    cout << sum << endl;
    return 0;
}
