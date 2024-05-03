#include<iostream>
using namespace std;
using std::string;

class Employee{
    string name;
    int id;
    string department;
    float sal;
    public:
    Employee(){}
    Employee(string n,int i,string d,float s)
    {
        name=n;id=i;department=d;sal=s;
    }
    void display()
    {
        cout<<"Employee name is: "<<name<<endl;
        cout<<"Employee id is: "<<id<<endl;
        cout<<"Employee department is: "<<department<<endl;
        cout<<"Employee salary is: "<<sal<<endl;

    }
    void increment()
    {
        sal+=sal*0.10;
        cout<<"New salary after increment is: "<<sal<<endl;
    }
    void change_department(string new_department)
    {
        department=new_department;
        cout<<"New department is: "<<department<<endl;
    }
    void eligible()
    {
        if(sal>50000)
        {
            cout<<"Eligible for promotion"<<endl;
        }
        else
        {
            cout<<"Not eligible for promotion"<<endl;
        }
    }
};
int main()
{
    Employee e("Somi",1,"Animation",50000);
    e.display();
    e.change_department("Graphic designer");
    e.increment();
    e.eligible();
    e.display();
    return 0;
}