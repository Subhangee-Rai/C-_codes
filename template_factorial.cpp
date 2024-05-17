// Write a template metaprogram that calculates the factorial of a number at compile time.
#include <iostream>
using namespace std;

// Primary template for calculating factorial
template <unsigned int N>
struct Factorial
{
    static constexpr unsigned long long value = N * Factorial<N - 1>::value;
    // Factorial&lt;5&gt;::value: Accesses the computed factorial of 5 at compile time.
};

// Specialization for the base case
template <>
struct Factorial<0>
{
    static constexpr unsigned long long value = 1;
};

int main()
{
    cout << "Factorial of 5: " << Factorial<5>::value << endl;
    cout << "Factorial of 10: " << Factorial<10>::value << endl;
    return 0;
}
