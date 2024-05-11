// Write a program to read data from a CSV (Comma Separated Values) file named "data.csv"
// and display it in tabular format on the console.

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in;
    string line;

    in.open("files.csv"); // Corrected filename

    if (!in)
    {
        cerr << "Error: Unable to open file!" << endl;
        return 1;
    }

    while (getline(in, line)) // Read each line from the file
    {
        string value;
        size_t pos = 0;

        while ((pos = line.find(',')) != string::npos) // Find the comma
        {
            value = line.substr(0, pos); // Extract the value
            cout << value << "\t";       // Display each value (tab-separated)
            line.erase(0, pos + 1);      // Remove the processed part
        }

        cout << line << endl; // Display the remaining value
    }

    in.close(); // Close the file

    return 0;
}
