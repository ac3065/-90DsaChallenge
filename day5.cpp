// //LINEAR SEARCHING
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
// int key;
// cout<<"enter the value of key"<<endl;
// cin>>key;  
//   for (int i = 0; i < n; i++)
//   {
// if (arr[i]==key)
// {
// cout<< i;
// }

//   }
  
// return 0;
// }
// //BINARY SEARCH
// #include<iostream>
// using namespace std;
// int binary_search(int n, int arr[], int key){
//   int s = 0;
//   int e = n-1;
//   while (s<=e)
//   {
//     int mid=(s+e)/2;
//     if (arr[mid] == key)
//     {
//       return mid; 
//     }
//     else if(arr[mid]>key){
//       e = mid-1;
//     }else{
//       s = mid+1;
//     }
//   }
//   return -1;
// }
// int main(){
//   int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     int key;
//     cout<<"enter the value of key"<<endl;
//     cin>>key;
//     cout<<binary_search(n,arr, key);
// return 0;
// }

// //reverse array (using loop)
// #include<iostream>
// using namespace std;
// void reverse(int n, int arr[]){
//   int s =0;
//   int e = n-1;
//   while (s<=e)
//   {
// swap(arr[s],arr[e]);
// s++;
// e--;
//   }
//   for (int i = 0; i < n; i++)
//   {
// cout<<arr[i]<<" ";
//   }
  
  
// }
// int main(){
//   int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     reverse(n,arr);
    
// return 0;
// }

// //reverse array (using extra array)
// #include<iostream>
// using namespace std;
// void reverse_arr(int n, int arr[]){
//   int reverse[n];
//   for (int i = 0; i < n; i++)
//   {
//     reverse[i] = arr[n-1-i];
//   }
//   cout<<"Reverse array is: ";
//   for (int i = 0; i < n; i++)
//   {
// cout<<reverse[i]<<" ";
//   }
  
  
// }
// int main(){
// int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//   reverse_arr(n,arr);
// return 0;
// }

// //reverse array(using recursion)
// #include<iostream>
// using namespace std;
// void reverse_arr(int n, int arr[],int s, int e){
// //base case:
// if (s>=e)
// {
// return;
// }
// operation
// int temp = arr[s];
// arr[s] = arr[e];
// arr[e] = temp;
// //recursive relation
// reverse_arr(n,arr,s+1,e-1);

// }
// void print_arr(int n, int arr[]){
//   for (int i = 0; i < n; i++)
//   {
// cout<<arr[i]<<" ";
//   }
  
// }
// int main(){
// int n;
//     cout << "Enter the value of n" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     cout<<endl;
//   reverse_arr(n,arr,0,n-1);
//   print_arr(n,arr);
// return 0;
// }

// //reverse subportion of array
// #include<iostream>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// void reverse_sub(int n, int *arr, int l, int r){
//   while(l<r){
//     swap(arr[l-1],arr[r-1]);
//     l++;
//     r--;

//   }
//   cout<<"after reversing subarray: "<<endl;
//   for (int i = 0; i < n; i++)
//   {
// cout<<arr[i]<<" ";
//   }
  
// }
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
//   int l,r;
//   cout<<"enter the l and r value"<<endl;
//   cin>>l>>r;
//   reverse_sub(n,arr,l,r);
  
// }
// //Find min and max of array
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
//   int max_no = INT_MIN;
//   int min_no = INT_MAX;
//   for (int i = 0; i < n; i++)
//   {
//      if (arr[i]>max_no)
//      {
//       max_no = arr[i];
//      }
//      else if(arr[i]<min_no){
//       min_no = arr[i];
//      }
//   }
//   cout<<"Maximum number in array is: "<<max_no<<" Minimum number is: "<<min_no<<endl;
  
// return 0;
// }

// //or

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
//   int max_no = arr[0];//consider first element to be smallest element and we will update as we find smallest to it 
//   int min_no = arr[0];// consider first element to be maximum again 
//   for (int i = 0; i < n; i++)
//   {
//      if (arr[i]>max_no)
//      {
//       max_no = arr[i];
//      }
//      else if(arr[i]<min_no){
//       min_no = arr[i];
//      }
//   }
//   cout<<"Maximum number in array is: "<<max_no<<" Minimum number is: "<<min_no<<endl;
  
// return 0;
// }

//!  ARRAYS DSA PROBLEMS

//? 1> SORT 0s 1s and 2s
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   cout<<"enter the elements"<<endl;
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
//   int ct0 = 0, ct1 = 0, ct2 = 0;
//   for (int i = 0; i <n; i++)
//   {
// if (arr[i] == 0)ct0++;
// else if (arr[i]==1) ct1++;
// else ct2++;
//   }
// for (int i = 0; i < ct0; i++)
// {
// arr[i] = 0;
// }
// for (int i = ct0; i < ct0+ct1; i++)
// {
// arr[i] = 1;
// }
// for (int i = ct0+ct1; i < n; i++)
// {
// arr[i] = 2;
// }

// for (int i = 0; i < n; i++)
// {cout<<arr[i]<<" ";
// }
// return 0;
// }

