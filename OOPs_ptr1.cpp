#include <iostream>
using namespace std;

class Array
{
private:
    int data;

public:
    int min_val, max_val, sum_val = 0;

    void initialize(int a)
    {
        data = a;
    }

    void display(Array *ptr, int n)
    {
        int i;
        min_val = ptr->data;
        max_val = ptr->data;
        for (i = 0; i < n; i++)
        {
            cout << (ptr + i)->data << endl;
            sum_val += (ptr + i)->data;
            if ((ptr + i)->data < min_val)
            {
                min_val = (ptr + i)->data;
            }
            if ((ptr + i)->data > max_val)
            {
                max_val = (ptr + i)->data;
            }
        }
    }

    void display_sum()
    {
        cout << "Sum: " << sum_val << endl;
    }

    void display_min()
    {
        cout << "Minimum element in array: " << min_val << endl;
    }

    void display_max()
    {
        cout << "Maximum element in array: " << max_val << endl;
    }
};

int main()
{
    int i, size, data;
    cout << "Enter the size of the array: ";
    cin >> size;

    Array *ptr = new Array[size];

    cout << "Enter the elements of the array: " << endl;
    for (i = 0; i < size; i++)
    {
        cin >> data;
        (ptr + i)->initialize(data);
    }

    ptr->display(ptr, size);
    ptr->display_sum();
    ptr->display_max();
    ptr->display_min();

    delete[] ptr; // Deallocate the memory

    return 0;
}
