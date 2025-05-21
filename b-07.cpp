#include <iostream>
#include <cmath>
using namespace std;

void primeFactors(long long n)
{
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1)
        cout << n;
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        primeFactors(n);
    }
    return 0;
}
