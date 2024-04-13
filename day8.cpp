//! find the element that appears only once and other two's, return ones 

// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   { 
//     cin>>arr[i];
//   }
// //   int maxi = arr[0];
// //   for (int i = 0; i < n; i++)
// //   {
// //  maxi = max(arr[i],maxi);
// //   }
//   int hash_arr[1000] = {0};
//   for (int i = 0; i < n; i++)
//   {
//     hash_arr[arr[i]] += 1;
//   }
//   for (int i = 0; i < n; i++)
//   {
//       if (hash_arr[i] == 2)
//       {
//          cout<<i<<endl;
//          break;
//       }
      
//   }
  

  
// return 0;
// }

//! SUBARRAY PROBLEMS IN ARRAYS:

//TODO: 1.  FIND THE SUBARRAYS OF GIVEN ARRAY:
// #include<iostream>
// using namespace std;

// int main(){
// int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   { 
//     cin>>arr[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = i; j < n; j++)
//       {
//               for (int k = i; k <=j; k++)
//               {
//                        cout<<arr[k]<<" ";//generate subarray
//               }
//               cout<<endl;
//       }
      
//   }
  
// return 0;
// }
//? ABOVE METHOD GENERATES THE POSSIBLE SUBARRAY OF GIVEN ARRAY BUT IT'S TIME COMPLEXITY IS O(N^3) AND SPACE COMPLEXITY IS 0(1)

//TODO 2: MAXIMUM SUBARRAY SUM PROBLEM( FIND THE SUBARRAY IN AN ARRAY THAT HAS MAXIMUM SUM):

// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
// int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   { 
//     cin>>arr[i];
//   }
//   int maxi = INT_MIN;
//   for (int i = 0; i < n; i++)
//   {
//       for (int j = i; j < n; j++)
//       {       int sum = 0;
//               for (int k = i; k <=j; k++)
//               {
//                       sum+=arr[k];
                      
//               }
//              // cout<<endl;
//              maxi = max(maxi,sum);
//       }
      
//   }
//   cout<<"Maximum sum of subarray is: "<<maxi<<endl;
// return 0;
// }

//but the above method finding the maximum subarray sum is inefficient because of larger time complexity so we 
// use KADANE'S ALGORITHM whose T.C IS O(n) only . 
// #include<iostream>
// #include<climits>
// using namespace std;

// int main(){
//   int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   { 
//     cin>>arr[i];
//   }
//   int sum = 0;
//   int maxi = INT_MIN;
//   for (int i = 0; i < n; i++)
//   {
     
//   }
  
// return 0;
// }

//! SUM OF THE SUBARRAY
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin>>arr[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//      for (int j = i; j < n; j++)
//      {  int sum = 0;
//          for (int k = i; k <= j; k++)
//          {
//               sum +=arr[k];

//          }
//          cout<<sum<<endl;
//      }
     
//   }


// }
//! lONGEST SUBARRAY WITH SUM K
// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"Enter the value of n"<<endl;
//   cin>>n;
//   int k;
//   cout<<"enter the value of k"<<endl;
//   cin>>k;

//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin>>arr[i];
//   }
// int len = 0;
//   for (int i = 0; i < n; i++)
//   {
//      for (int j = i; j < n; j++)
//      {  int sum = 0;
//          for (int k = i; k <= j; k++)
//          {
//               sum +=arr[k];
//          }
//          if (sum==k)
//          {
//             len = max(len, j-i+1);
//          }
         
//      }
     
//   }
// cout<<len<<endl;
// return 0;
// }

//BUT THE PROBLEM HERE IS THE TIME COMPLEXITY IT TAKES IS MUCH HIGH 



//! TWO SUM PROBLEM 
// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cout<<"enter n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   { 
//     cin>>arr[i];
//   }
//   int target;
//   cout<<"Enter target"<<endl;
//   cin>>target;

//   for (int i = 0; i < n; i++)
//   {
//       for (int j = i; j < n; j++)
//       {
//            if (arr[i]+arr[j]==target)
//            {
//             cout<<i<<" "<<j<<endl;
//             break;
 
//             }
           
//       }
      
//   }
  
// return 0;
// }
//! but the above solution is not optimised