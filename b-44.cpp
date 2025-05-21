#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string id, name, class_name, email;
};

int main()
{
    vector<Student> students;
    string id, name, class_name, email;

    while (getline(cin, id))
    {
        if (id.empty())
            break;
        getline(cin, name);
        getline(cin, class_name);
        getline(cin, email);
        students.push_back({id, name, class_name, email});
    }

    sort(students.begin(), students.end(),
         [](const Student &a, const Student &b)
         {
             return a.id < b.id;
         });

    // Output sorted students
    for (const auto &s : students)
    {
        cout << s.id << " " << s.name << " " << s.class_name << " " << s.email << endl;
    }

    return 0;
}