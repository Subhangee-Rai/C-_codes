// SYNTAX :

// #include<iostream>
// using namespace std;
// using std::string;
// int main()
// {
//     return 0;
// }


// will give an error 
// #include <iostream>
// char main() {
//     std::cout << "Hello, World!" << std::endl;
//     return 'A';  // Return a character, although this is non-standard
// }


//Variables 
int g_c = 23;
#include<iostream>
using namespace std;
//is a manipulator library that have setw()
#include<iomanip>
int main()
{
    //even if we give float value only the integer part is printed 
    int a=10.22;
    cout<<a<<endl;  
    
    //Value of variable can be changed ( eg: in loops i always change)
    a=20;
    cout<<a<<endl;

    //normal float value 
    float b=20.22345;
    cout<<b<<endl;

    //this value will not be converted to float value numerically but still the variable is a float 
    b=20;
    cout<<b<<endl;
    cout<<b<<endl;

    //char can't handle more than one character (this will throw error )
    // char c="10";
    // cout<<c<<endl;

    //normal char value 
    char c='1'; //can be in single or double quotes 
    cout<<c<<endl;

    //normal double value , by default will give value upto 5 decimal points
    double d=1.188888888888888888888009;
    cout<<d<<endl;

    //long can't be combined with float
    long double g=1.188888888888888888888009;
    cout<<g<<endl;

    //normal long int value (can take upto 10 digits)
    long int e=1111111111;
    cout<<e<<endl;

    //can take more than 10 digits 
    long long int f=111111111111111111;
    cout<<f<<endl;

    //global and local variables 
    int g_c=22;
    cout<<g_c<<endl;    //this will print the value of local variable
    cout<<::g_c<<endl;   //due to use of scope resolution operator this will print the value of global variable 

    //reference variable 
    int x=45;
    int &y=x;
    cout<<"Value of x is: "<<x<<endl;
    cout<<"Value of y is: "<<y<<endl;

    x=20;   //if we change the value of x , value of y will also change since y is referenced to x 
    cout<<"Value of x after change is: "<<x<<endl;
    cout<<"Value of y after change is: "<<y<<endl;

    //type casting 
    int z=20;
    cout<<"Type cast to float (method 1): "<<float(z)<<endl;
    cout<<"Type cast to float (method 2): "<<(float)z<<endl;


    int a1=2,b1=20,c1=30;
    cout<<"The value of a without setw() is: "<<a1<<endl;
    cout<<"The value of b without setw() is: "<<b1<<endl;
    cout<<"The value of c without setw() is: "<<c1<<endl;
    cout<<"The value of a with setw() is: "<<setw(4)<<a1<<endl;
    cout<<"The value of b with setw() is: "<<setw(4)<<b1<<endl;
    cout<<"The value of c with setw() is: "<<setw(4)<<c1<<endl;
    return 0;
}