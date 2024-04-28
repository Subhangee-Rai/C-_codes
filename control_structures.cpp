// Question 1
// Given an unsorted array of integers, find the length of the longest consecutive elements sequence. Your algorithm should run in O(n) complexity.

// limitation : this code doesn't fulfill the O(n) criteria
//  #include<iostream>
//  using namespace std;
//  using std::string;
//  void sort(int arr[6])
//  {
//      int i,j,temp;
//      for(i=0;i<6;i++)
//      {
//          for(j=i;j<6;j++){
//          if(arr[i]>arr[j])
//          {
//              temp=arr[i];
//              arr[i]=arr[j];
//              arr[j]=temp;
//          }}
//      }
//  }
//  int main()
//  {
//      int arr[]={100,4,200,1,3,2};
//      int k=1,i;
//      sort(arr);
//      for(i=0;i<sizeof(arr);i++)
//      {
//          if((arr[i]+1)==arr[i+1])
//          {
//              k++;
//          }
//      }
//      cout<<"Longest consecutive sequence is: "<<k<<endl;
//      return 0;
//  }

// Question 2
// There are two sorted arrays nums1 and nums2 of size m and n respectively. Find the median of the two sorted arrays. The overall run time complexity should be O(log(min(m, n))).

// #include<iostream>
// using namespace std;
// using std::string;

// void sort(int arr[100], int n) {
//     int i, j, temp;
//     for (i = 0; i < n; i++) {
//         for (j = i + 1; j < n; j++) {  
//             if (arr[i] > arr[j]) {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int display(int arr[100], int n) {
//     int i;
//     cout << "Array is: ";
//     for (i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int arr1[] = {1, 3};
//     int arr2[] = {2};
//     int i, j;
//     int m = sizeof(arr1) / sizeof(arr1[0]);  // Corrected the calculation of array size
//     int n = sizeof(arr2) / sizeof(arr2[0]);
//     int arr3[m + n];

//     for (i = 0; i < m; i++) {
//         arr3[i] = arr1[i];
//     }

//     for (j = 0; j < n; j++) {  
//         arr3[j + m] = arr2[j];
//     }

//     display(arr3, m + n);
//     sort(arr3, m + n);
//     display(arr1, m);
//     display(arr2, n);
//     display(arr3, m + n);

//     int k;
//     if ((m + n) % 2 == 0) {
//         k = (m + n) / 2;
//         cout << "Median of both arrays is: " << (arr3[k - 1] + arr3[k]) / 2.0 << endl;
//     } else {
//         k = (m + n) / 2;
//         cout << "Median of both arrays is: " << arr3[k] << endl;
//     }

//     return 0;
// }
