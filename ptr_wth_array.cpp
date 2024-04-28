#include<iostream>
using namespace std;
using std::string;

void display_array_using_pointer(int *ptr,int n)
{
    int i;
    //Method 2
    cout<<endl<<"Method 1"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<endl;   //to print array elements using pointer 
    }

    //Method 1
    cout<<"Method 2"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<*ptr<<endl;   //to print array elements using pointer 
        ptr++;
    }
}
void input_array_using_pointer()
{
    int i,n, arr[100];
    int *ptr=arr;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>*(ptr+i);  //to enter elements in an array using pointers 
    }
    display_array_using_pointer(ptr,n);
}
int main()
{
    int marks[]={1,2,3,4,5};
    int *ptr=marks;
    display_array_using_pointer(ptr,5);
    input_array_using_pointer();
    return 0;
}

