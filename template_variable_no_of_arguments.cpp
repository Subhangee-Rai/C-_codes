// Implement a variadic template function printAll that can take any number of arguments and print them all.

#include <iostream>
using namespace std;
// Base case: When there are no arguments left to process
void printAll()
{
    cout << endl;
}

// Variadic template function to print all arguments
template <typename T, typename... Args>
void printAll(T first, Args... args)
{
    cout << first << " "; // Print the first argument
    printAll(args...);    // Recursively call printAll with the remaining arguments
}

int main()
{
    printAll(1, 2.5, "Hello", 'A', "World", 42);
    printAll(1, 2.5, "Hello", 'A');

    return 0;
}
