#include<iostream>
#include<string>
using namespace std;

class Networking
{
protected:
    string country;

public:
    void set_loc(string c)
    {
        country = c;
    }

    void get_loc()
    {
        cout << "You are in country: " << country << endl;
    }
};

class Devices: virtual public Networking
{
protected:
    string name[5];
    int number;
    int no;

public:
    void set_dev(string na[], int num, int n)
    {
        for(int i = 0; i < n; i++)
        {
            name[i] = na[i];
        }
        number = num;
        no = n;
    }

    void get_dev()
    {
        for(int i = 0; i < no; i++)
        {
            cout << "Device: " << name[i] << ", quantity: " << number << endl;
        }
    }
};

class Connections: virtual public Networking
{
protected:
    string type;

public:
    void set_con(string t)
    {
        type = t;
    }

    void get_con()
    {
        cout << "Type of connection used is: " << type << endl;
    }
};

class Topology: public Connections, public Devices
{
private:
    string topo;

public:
    void set(string top)
    {
        topo = top;
    }

    void get()
    {
        cout << "Topology used is: " << topo << endl;
        cout << "Devices in the topology: " << endl;
        get_dev();
        get_con();
    }
};

int main()
{
    string devices[] = {"switches", "routers", "hubs"};
    Topology tobj;
    tobj.set_loc("USA");
    tobj.set_dev(devices, 10, 3);
    tobj.set_con("wired");
    tobj.set("bus");
    tobj.get();
    return 0;
}
