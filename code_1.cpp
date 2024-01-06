// basics

//system header files 
#include<iostream>   //library to incldue
#include<typeinfo>
using namespace std;  //for input output 
#include<iomanip>
//user defined header files
#include "myheader.h"


int g =10 ; //making a global variable by name g
int main()
{
    cout<<"Hello"<<endl;   // clearly observe the syntax for cout 

    //printing global and local variable
    cout<<"Global variable: "<< ::g<<endl; // with using ::. global value should get printed 
    g=20;
    cout<<"Local variable: "<< g <<endl; //without using ::, local variable value is printed for both( that is precedence given to local variable)
    cout<<"Global variable: "<< ::g<<endl; // with using ::. global value should get printed  
    // for this statement the value will be printed as 20 because by writing g=20 in main function we are updating the value of global variable
    
    //use of enum 
    enum Color { RED, GREEN, BLUE }; //to define a set of named integer constants.
    Color myColor = GREEN;
    cout<<myColor<<endl;  // gives the index and not the string 

    //type casting 
    double x = 5.67;
    int y = static_cast<int>(x);
    cout<<y<<endl;

    //use of auto & how to check type of variable
    auto b=42;
    cout<<typeid(b).name()<<endl; // will output i indicating integer


    //Operators in c++
    int a=5;
    cout<<a<<endl;      //5
    cout<<a++<<endl;    //first prints 5, then a=6
    cout<<a--<<endl;    //first prints 6, then a=5
    cout<<++a<<endl;    //6
    cout<<--a<<endl;    //5

    //type casting 
    cout<<static_cast<float>(a)<<endl;

    //refernce variable 
    int var=24;
    int &ref_var=var;
    cout<<"Normal variable is :"<<var<<endl;
    cout<<"Reference variable pointing to normal variable is :"<<ref_var<<endl;

    //Manipulators
    int mvar=44;
    cout<<"Value of variable without setw : "<<mvar<<endl;
    cout<<"Value of variable with setw : "<<setw(8)<<mvar<<endl; 
    return 0;
}


//commenting a multiline comment 
/*
//hello

*/