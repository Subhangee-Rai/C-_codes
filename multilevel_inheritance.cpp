/*
Multilevel inheritance:
    A -> B -> C -> D
*/
#include <iostream>
using namespace std;
using std::string;

class Student{
    protected:
    string name;
    int roll;
    public:
    Student(){}
    void set_info(string n,int r)
    {
        name=n;roll=r;
    }
    void display()
    {
        cout<<"Name of student: "<<name<<endl;
        cout<<"Roll of student: "<<roll<<endl;
    }
};
class Marks: public Student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m, float p)
    {
        maths=m;physics=p;
    }
    void marks()
    {
        cout<<"Marks in maths is: "<<maths<<endl;
        cout<<"Marks in physics is: "<<physics<<endl;
    }

};
class Results: public Marks{
    public:
    Results(){}
    void display_results()
    {
        display();
        marks();
        cout<<"Your percentage is: "<<(maths+physics)/2<<"%"<<endl;
    }
};
int main()
{
    Results obj;
    obj.set_info("Somi",1);
    obj.set_marks(90.1,98.2);
    obj.display_results(); 
    return 0;
}