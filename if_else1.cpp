// Question 1
/* Write a program that takes a student's percentage as input & classifies the student's grade based on the following criteria:
90% and above: A
80% to 89%: B
70% to 79%: C
60% to 69%: D
below 60%: F*/

#include<iostream>
using namespace std;

//Answer 1
// int main()
// {   
//     float marks;
//     cout<<"Enter your percentage: "<<endl;
//     cin>>marks;         //here we don't use & like c
//     if(marks>=90)
//     {
//         cout<<"Grade A"<<endl;
//     }
//     else if(marks<90&&marks>=80)
//     {
//         cout<<"Grade B"<<endl;
//     }
//     else if(marks<80&&marks>=70)
//     {
//         cout<<"Grade C"<<endl;
//     }
//     else if(marks<70&&marks>=60)
//     {
//         cout<<"Grade D"<<endl;
//     }
//     else if(marks<60)
//     {
//         cout<<"Grade F"<<endl;
//     }
//it is not important to write else everytime an else if ladder is written 
//     return 0;
// }



//Question 2
/*Write a program that takes an integer as input and classifies it as positive, negative, or zero*/

//Answer 2
// int main()
// {
//     signed int x;
//     cout<<"Enter the value of x: "<<endl;
//     cin>>x;
//     if(x<0)
//     {
//         cout<<"Negative"<<endl;
//     }
//     else if(x>0)
//     {
//         cout<<"Positive"<<endl;
//     }
//     else if(x==0)
//     {
//         cout<<"Zero"<<endl;
//     }
//     return 0;
// }


//Question 3
/*Write a program that takes three numbers as input and prints the largest among them*/

//Answer 3
// int main()
// {
//     float x,y,z;
//     cout<<"Enter 3 numbers: "<<endl;
//     cin>>x>>y>>z;
//     if(x>y&&x>z)
//     {
//         cout<<x<<" is largest"<<endl;
//     }
//     else if(y>x&&y>z)
//     {
//         cout<<y<<" is largest"<<endl;
//     }
//     else if(x==y&&y==z)
//     {
//         cout<<"All numbers are equal"<<endl;
//     }
//     else 
//     {
//         cout<<z<<" is largest"<<endl;
//     }
//     return 0;
// }


//Question 4
/*Write a program that takes a year as input & checks whether it's a leap year or not. A leap year is divisble by 4,
but not by 100 unless it is also divisible by 400*/

//Answer 4
// int main()
// {
//     int x;
//     cout<<"Enter an year"<<endl;
//     cin>>x;
//     if(x%4==0)
//     {
//         if(x%100==0)
//         {
//             if(x%400==0)
//             {
//                 cout<<"Leap year"<<endl;
//             }
//             else
//             {
//                 cout<<"Not a leap year"<<endl;
//             }
//         }
//         else
//         {
//             cout<<"Leap year"<<endl;
//         }
//     }
//     else
//     {
//         cout<<"Not a leap year"<<endl;
//     }
//     return 0;
// }

