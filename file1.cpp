#include<iostream>
#include<fstream>
using namespace std;
using std::string;

int main()
{

    //writing into file
    ofstream out;
    out.open("file_basics.txt");
    out<<"This is the file content"<<endl;
    out<<"My name is subhangee"<<endl;
    out<<"I'm a student of KLETU"<<endl;
    out<<"How are you?"<<endl;
    //will automatically get close but good practice to close explicitly
    out.close();

    //reading from file
    ifstream in;
    string st;
    in.open("file_basics.txt");

    //method 1
    // getline(in,st);
    // cout<<st<<endl; // need to use endl bcoz \n of .txt is not copied to string st
    // getline(in,st);
    // cout<<st<<endl;

    //method 2
    while(in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}