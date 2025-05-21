#include <iostream>
#include <iomanip>
using namespace std;

bool isBalanced(int n)
{
    int even = 0, odd = 0;
    while (n)
    {
        int d = n % 10;
        if (d % 2 == 0)
            even++;
        else
            odd++;
        n /= 10;
    }
    return even == odd;
}

int main()
{
    int n;
    cin >> n;
    int start = 1;
    for (int i = 1; i < n; i++)
        start *= 10;
    int end = start * 10;
    int count = 0;
    for (int i = start; i < end; i++)
    {
        if (isBalanced(i))
        {
            cout << i << " ";
            if (++count % 10 == 0)
                cout << endl;
        }
    }
    return 0;
}
