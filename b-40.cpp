#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string name, dob;
        cin >> name >> dob;
        v.push_back({dob, name});
    }
    sort(v.begin(), v.end());
    cout << v.back().second << endl
         << v.front().second << endl;
}
