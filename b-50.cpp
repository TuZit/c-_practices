#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <algorithm>
using namespace std;

void readFile(string file, set<string> &s)
{
    ifstream in(file);
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
}

int main()
{
    set<string> A, B;
    readFile("DATA1.in", A);
    readFile("DATA2.in", B);

    set<string> un, inter;
    set_union(A.begin(), A.end(), B.begin(), B.end(), inserter(un, un.begin()));
    set_intersection(A.begin(), A.end(), B.begin(), B.end(), inserter(inter, inter.begin()));

    for (auto w : un)
        cout << w << " ";
    cout << endl;
    for (auto w : inter)
        cout << w << " ";
}
