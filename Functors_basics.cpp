#include <iostream>
#include <functional> // For functors like greater, less, etc.
#include <algorithm>  // For sort function
using namespace std;

// Function to display an array of integers
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 6;
    int arr[] = {1, 32, 75, 4, 2, 55};

    // Sort array in ascending order using default comparator (less)
    sort(arr, arr + size);
    cout << "Array sorted in ascending order: ";
    display(arr, size);

    // Sort array in descending order using greater<int> functor
    sort(arr, arr + size, greater<int>());
    cout << "Array sorted in descending order: ";
    display(arr, size);

    // Sort array to place elements in non-decreasing order using less<int> functor
    sort(arr, arr + size, less<int>());
    cout << "Array sorted in non-decreasing order (using less<int>): ";
    display(arr, size);

    // Sort array to place elements in non-increasing order using greater_equal<int> functor
    sort(arr, arr + size, greater_equal<int>());
    cout << "Array sorted in non-increasing order (using greater_equal<int>): ";
    display(arr, size);

    // Sort array to place elements in non-decreasing order using less_equal<int> functor
    sort(arr, arr + size, less_equal<int>());
    cout << "Array sorted in non-decreasing order (using less_equal<int>): ";
    display(arr, size);

    return 0;
}
