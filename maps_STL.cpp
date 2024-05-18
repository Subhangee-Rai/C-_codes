#include <iostream>
#include <map>
using namespace std;
using std::string;

void display(map<string, int> &marks)
{
    map<string, int>::iterator it;
    for (it = marks.begin(); it != marks.end(); it++)
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
}
int main()
{
    map<string, int> marks;
    marks["Somi"] = 98;
    marks["Shubhi"] = 91;
    marks["Kishu"] = 100;
    marks.insert({{"Motu", 99}, {"Patlu", 96}});
    display(marks);

    cout << "Size of map: " << marks.size() << endl;
    cout << "Max size of map: " << marks.max_size() << endl;
    return 0;
}