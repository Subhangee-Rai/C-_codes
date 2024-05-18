#include <iostream>
#include <list>
using namespace std;
using std::string;

void display(list<int> &l)
{
    list<int>::iterator iter;
    cout << "Elements in the list are: " << endl;
    for (iter = l.begin(); iter != l.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;
    int element, i;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter element: ";
        cin >> element;
        list1.push_back(element);
    }
    display(list1);

    // sorting the list
    list1.sort();
    display(list1);
    cout << endl;

    // making list method2
    list<int> list2(5);
    list<int>::iterator iter;
    iter = list2.begin();
    for (i = 0; i < 5; iter++, i++)
    {
        cout << "Enter element: ";
        cin >> element;
        *iter = element;
    }
    display(list2);

    // to remove last element
    list2.pop_back();
    display(list2);

    // to remove front element
    list2.pop_front();
    display(list2);

    // to remove any element
    list2.remove(3);
    display(list2);

    // merging list1 & list2
    list1.merge(list2);
    display(list1);

    // reversing the list
    list1.reverse();
    display(list1);
    return 0;
}