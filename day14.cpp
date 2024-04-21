//! MERGE TWO SORTED ARRAYS (oh! wow i coded it myself)
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> merge2sorted_array(int arr1[],int n, int arr2[], int m){
//   vector<int>arr;
//   int c1= 0;
//   int c2= 0;
//     while (c1<n && c2<m){
      
//         if(arr1[c1]<=arr2[c2]){
//           arr.push_back(arr1[c1]);
//           c1++;
//         }else if(arr1[c1]>arr2[c2]){
//           arr.push_back(arr2[c2]);
//           c2++;
//         }
//   }
//   while (c1<n)
//   {
//  arr.push_back(arr1[c1]);
//  c1++;
//   }
//   while (c2<m)
//   {
//   arr.push_back(arr2[c2]);
//   c2++;
//   }
  
//   return arr;
  
// }
// int main(){
//   int arr1[4]={1,3,5,7};
//   int arr2[5]={0,2,6,8,9};
//  vector<int> ans =  merge2sorted_array(arr1,4,arr2,5);
// for (int i = 0; i < ans.size(); i++)
// {
// cout<<ans[i]<< " ";
// }

// return 0;
// }

// When you pass an array to a function in C++, you're passing a pointer to the first element of the array. So, any modifications made to the array inside the function directly affect the original array in memory. This is because arrays decay into pointers when passed to functions.

// However, when you pass a string to a function in C++, without using a reference, you're passing a copy of the string, not the actual memory address. This is because std::string objects are treated differently than arrays. If you want to pass a string by reference to avoid copying, you use the & operator, like const std::string& str.

// So, in summary:

// Arrays are passed by reference (as pointers to their first elements) by default.
// Strings are passed by value (copy) by default, and if you want to pass them by reference, you need to use the & operator explicitly.



#include <bits/stdc++.h>
using namespace std;

void merge(long long arr1[], long long arr2[], int n, int m) {

    //Declare 2 pointers:
    int left = n - 1;
    int right = 0;

    //Swap the elements until arr1[left] is
    // smaller than arr2[right]:
    while (left >= 0 && right < m) {
        if (arr1[left] > arr2[right]) {
            swap(arr1[left], arr2[right]);
            left--, right++;
        }
        else {
            break;
        }
    }

    // Sort arr1[] and arr2[] individually:
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
}

int main()
{
    long long arr1[] = {1, 4, 8, 10};
    long long arr2[] = {2, 3, 9};
    int n = 4, m = 3;
    merge(arr1, arr2, n, m);
    cout << "The merged arrays are: " << "\n";
    cout << "arr1[] = ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << "\narr2[] = ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

