#include <fstream>
#include <iostream>
#include <map>
using namespace std;

int main()
{
    ifstream in("DATA.in");
    map<int, int> mp;
    int x;
    while (in >> x)
        mp[x]++;
    for (auto p : mp)
        cout << p.first << " " << p.second << endl;
}
