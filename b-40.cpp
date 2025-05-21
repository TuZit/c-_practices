#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string convert(const string &dob)
{
    return dob.substr(6, 4) + dob.substr(3, 3) + dob.substr(0, 2);
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++)
    {
        string name, dob;
        cin >> name >> dob;
        v.push_back({convert(dob), name});
    }
    sort(v.begin(), v.end());
    cout << v.back().second << endl;  
    cout << v.front().second << endl; 
}