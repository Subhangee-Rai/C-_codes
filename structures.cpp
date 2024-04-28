#include<iostream>
using namespace std;
using std::string;

//structures are used when we need array of different datatype's element 
typedef struct student
{
    string name;
    int roll;
    int marks;    /* data */

}stud;
int main()
{
    stud student1;
    student1.name="Kavya";
    student1.roll=1;
    student1.marks=89;
    cout<<"Details of student 1: "<<endl;
    cout<<"Name: "<<student1.name<<endl<<"Roll: "<<student1.roll<<endl<<"Marks: "<<student1.marks<<endl;
    return 0;
}