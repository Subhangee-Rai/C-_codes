#include<iostream>
using namespace std;
using std::string;
int main()
{
    enum week{Sunday,Monday,Tuesday,Wednesday,Thursday ,Friday, Saturday};
    cout<<Sunday<<endl; //will print an integer number
    
    //using enum as a datatype
    week day=Monday;
    if(day==1){cout<<"Monday is on 2nd number"<<endl;}
    else{cout<<"Monday is not 2nd number"<<endl;}
    return 0;
}