#include <iostream>
#include <fstream>
using namespace std;
using std::string;

int main()
{
    ifstream in;
    in.open("student.txt");
    string name, n;
    float sum, avg;
    int i;
    if (!in)
    {
        cout << "Error opening file" << endl;
        return 1;
    }
    while (in.eof() == 0)
    {
        in >> name;
        sum = 0;
        for (i = 0; i < 5; i++)
        {
            in >> n;
            sum += stoi(n);
        }
        avg = sum / 5;
        cout << "Avg marks of " << name << " is " << avg << endl;
    }
    in.close();
    return 0;
}