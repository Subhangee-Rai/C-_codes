#include<iostream>
using namespace std;
using std::string;

typedef union value
{
    int x;
    float y;
    double z;
    /* data */
}val;
int main()
{
    val v;
    v.x=10;v.y=20;
    cout<<v.x<<endl;   
    cout<<v.y<<endl;    //only one value will be correctly printed, since only one member of the union can be used at a time 
    // most recent declared value is printed in these cases 
    return 0;
}