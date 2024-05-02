#include<iostream>
using namespace std;
using std::string;
int main()
{
    //traditional method 
    int a=10;
    int *ptr=&a;
    cout<<"By traditional method: "<<endl;
    cout<<"Value at address "<<&a<<" is "<<*(ptr)<<endl;

    //c++ method
    int *pt= new int(10);
    cout<<"By traditional method: "<<endl;
    cout<<"Value at address "<<pt<<" is "<<*(pt)<<endl;

    //pointer array
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    return 0;
}