#include<iostream>
#include<math.h>
using namespace std;

//Question 1
/*Write a program that takes coefficients (a,b,c) of a quadratic equation as input & pritns the roots. 
Handle cases for real & coplex roots*/

// Answer 1
// int main()
// {
//     int a,b,c;
//     cout<<"Enter the value of a,b,c: "<<endl;
//     cin>>a>>b>>c;
//     cout<<"The quadratic equation is : ("<<a<<")x + ("<<b<<")x^2 + ("<<c<<")"<<endl;
//     double discriminant = b*b - 4*a*c;
//     if(discriminant>0)  //real & distinct roots
//     {
//         double root1 = (-b + sqrt(discriminant))/(2*a);
//         double root2 = (-b - sqrt(discriminant))/(2*a);
//         cout<<"Roots are: "<<root1<<" and "<<root2<<endl;
//     }
//     else if(discriminant==0)
//     {
//         double root = -b/(2*a);
//         cout<<"Roots are: "<<root<<" and "<<root<<endl;
//     }
//     else
//     {
//         double realpart = -b/(2*a);
//         double imaginarypart = sqrt(abs(discriminant))/(2*a);
//         cout<<"Roots are: "<<realpart<<" + i"<<imaginarypart<<" and "<<realpart<<" - i"<<imaginarypart<<endl;
//     }

// }


//Question 2
/*Write a program that takes an integer as input & checks whether it belongs to fibonacci series or not*/
// int perfect_square(int x)
// {
//     int y = sqrt(x);
//     if (y*y==x)
//     {
//         return 1;
//     }
//     return 0;
// }
// int main()
// {
//     int n;
//     cout<<"Enter the number: "<<endl;
//     cin>>n;
//     if(perfect_square(5*n*n-4)||perfect_square(5*n*n+4))
//     {
//         cout<<n<<" belongs to fibonnaci series."<<endl;
//     }
//     else
//     {
//         cout<<n<<" doesn't belongs to fibonacci series."<<endl;
//     }
//     return 0;
// }


//Question 3
/*Write a program that takes an integer as input & checks whether it is a prime number or not*/

//Answer 3
// int main()
// {
//     int n,i,flag;
//     cout<<"Enter the number:"<<endl;
//     cin>>n;
//     if(n==0||n==1)
//     {
//         flag=0;
//     }
//     else if(n==2)
//     {
//         flag=1;
//     }
//     else
//     {
//         for(i=2;i<=n/2;i++)
//         {
//             if(n%i==0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//     }
//     if(flag==0)
//     {
//         cout<<"Not a prime number"<<endl;
//     }
//     else
//     {
//         cout<<"Prime number"<<endl;
//     }
//     return 0;
// }


//Question 4
/*Write a program that takes an integer "n" as input and prints a pattern as shown below for n=5:
*
**
***
****
***** */

//Answer 4
// int main()
// {
//     int n,i,j;
//     cout<<"Enter a number: "<<endl;
//     cin>>n;
//     for(i=0;i<n;i++)
//     {
//         for(j=1;j<=i+1;j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     return 0;
// }

