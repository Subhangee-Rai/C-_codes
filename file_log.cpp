#include <iostream>
#include <fstream>
using namespace std;
using std::string;
int main()
{
    ifstream in;
    ofstream out;
    out.open("log.txt", ios_base::app);
    if (!out)
    {
        cout << "Error opening the file" << endl;
        return 1;
    }
    string msg, no;
    int ch;
    while (ch)
    {
        cout << "Enter the message and the number" << endl;
        cin >> msg >> no;
        out << msg << " " << no << endl;
        cout << "added" << endl;
        cout << "Do you want to continue?" << endl;
        cin >> ch;
        if (ch == 0)
        {
            cout << "Exiting" << endl;
            return 0;
        }
    }
    out.close();
    return 0;
}