// Write a program to insert an element at the beginning, middle, and end of a vector.
// Write a program to delete an element from a vector by value and by index.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void display(const vector<float> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    vector<float> vec;
    float element, value;
    int choice, ch = 1, pos;

    while (ch)
    {
        cout << "Where do you want to enter the element?" << endl;
        cout << "1. Beginning" << endl;
        cout << "2. Middle" << endl;
        cout << "3. End" << endl;
        cout << "4. Delete by value" << endl;
        cout << "5. Delete by index" << endl;
        cout << "10. Display vector" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter the value of element: ";
            cin >> element;
            vec.insert(vec.begin(), element);
        }
        else if (choice == 2)
        {
            cout << "Enter the value of element: ";
            cin >> element;
            cout << "Enter the position you want to enter the element: ";
            cin >> pos;
            if (pos >= 0 && pos <= vec.size())
            {
                vec.insert(vec.begin() + pos, element);
            }
            else
            {
                cout << "Invalid position" << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter the value of element: ";
            cin >> element;
            vec.push_back(element);
        }
        else if (choice == 4)
        {
            cout << "Enter the value of element to be deleted: ";
            cin >> value;
            auto it = remove(vec.begin(), vec.end(), value);
            if (it != vec.end())
            {
                vec.erase(it, vec.end());
                cout << "Element " << value << " deleted." << endl;
            }
            else
            {
                cout << "Element not found." << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Enter the index of element to be deleted: ";
            cin >> pos;
            if (pos >= 0 && pos < vec.size())
            {
                vec.erase(vec.begin() + pos);
                cout << "Element at index " << pos << " deleted." << endl;
            }
            else
            {
                cout << "Invalid index" << endl;
            }
        }
        else if (choice == 10)
        {
            display(vec);
        }
        else
        {
            cout << "Invalid choice" << endl;
        }

        cout << "Do you want to continue? (1 for Yes, 0 for No): ";
        cin >> ch;
    }

    return 0;
}
