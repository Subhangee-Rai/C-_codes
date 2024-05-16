#include <iostream>
#include <vector>
using namespace std;
using std::string;

// Function to display elements of a vector
void display(const vector<int> &v)
{
    cout << "Elements in the vector are: ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void print(vector<int> &v)
{
    int i;
    cout << "Elements in the vector are(at method): " << endl;
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

void print_char_vector(vector<char> &v)
{
    int i;
    cout << "Elements in the vector are(at method): " << endl;
    for (i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << " ";
    }
    cout << endl;
}

// Function to insert an element at the front of the vector
void insert_at_front(vector<int> &v)
{
    int element;
    cout << "Enter the element: ";
    cin >> element;
    v.insert(v.begin(), element); // Insert at the beginning
}

int main()
{
    // vector<int> vec1;
    // int element, size;

    // cout << "Enter the size of vector: ";
    // cin >> size;

    // // Insert elements into the vector
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter element: ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }

    // // Display the vector
    // display(vec1);

    // // Remove the last element
    // vec1.pop_back();
    // display(vec1);

    // // Insert element at the front
    // vec1.insert(vec1.begin(), 586); // Insert 586 at the first position
    // print(vec1);

    // // Allow user to insert more elements at the front
    // int ch = 1;
    // while (ch)
    // {
    //     insert_at_front(vec1);
    //     cout << "Do you want to enter more elements in vector? (0 for No, 1 for Yes): ";
    //     cin >> ch;
    // }

    // // Display the final vector
    // display(vec1);

    int i, size2;
    char element;
    vector<char> vec2(4); // 4 element character vector
    cout << "Enter the size of vector: ";
    cin >> size2;
    for (i = 0; i < size2; i++)
    {
        cout << "Entre element: ";
        cin >> element;
        vec2.push_back(element);
    }
    print_char_vector(vec2);

    // vector form another vector
    vector<char> vec3(vec2);
    print_char_vector(vec3);
    return 0;
}
