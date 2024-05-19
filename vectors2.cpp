#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> vec;

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    // Display elements of the vector
    cout << "Elements of the vector: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Insert an element at the beginning
    vec.insert(vec.begin(), 5);

    // Display elements after insertion
    cout << "After inserting 5 at the beginning: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Remove the last element
    vec.pop_back();

    // Display elements after removal
    cout << "After removing the last element: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }
    cout << endl;

    // Access elements using iterator
    cout << "Using iterators to access elements: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using range-based for loop
    cout << "Using range-based for loop: ";
    for (int element : vec) {
        cout << element << " ";
    }
    cout << endl;

    // Clear all elements
    vec.clear();

    // Check if the vector is empty
    if (vec.empty()) {
        cout << "The vector is now empty." << endl;
    }

    return 0;
}
