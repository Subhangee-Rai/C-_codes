#include<iostream>
#include<math.h>
using namespace std;
using std::string;

template <class t1=int , class t2=float >
class Product{
    public:
    t1 data1,data2;
    t2 result, theta;
    Product(t1 d1,t1 d2, t2 t)
    {
        data1=d1;data2=d2;theta=t;
    }
    void dot_product()
    {
        result= data1*data2*cos(theta);
        cout<<"Dot product of "<<data1<<" & "<<data2<<" is "<<result<<endl;
    }
    void cross_product()
    {
        result=data1*data2*sin(theta);
        cout<<"Cross product of "<<data1<<" & "<<data2<<" is "<<result<<endl;

    }
};
int main()
{
    Product<> obj(1,2,45.0);
    obj.dot_product();
    obj.cross_product();
    return 0;
}