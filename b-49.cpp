#include <iostream>
#include <fstream>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream in("VANBAN.in");
    set<string> s;
    string line, word;
    while (getline(in, line))
    {
        stringstream ss(line);
        while (ss >> word)
        {
            for (char &c : word)
                c = tolower(c);
            s.insert(word);
        }
    }
    for (auto w : s)
        cout << w << endl;
}
