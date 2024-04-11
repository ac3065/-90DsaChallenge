#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  // precompute
  int hash[100000] = {0};// the maximum size of hash array could be 10^6 and beyond that will give segmentation error
  // but if we declare size of hash array globally that is above int main then it  could go upto 1e7 that is 10^7.
  for (int i = 0; i < n; i++)
  {
     hash[arr[i]]+=1;
  }
  
  int q;
  cin>>q;
  while (q--)
  {
     int number;
     cin>>number;
     //fetch
     cout<<hash[number]<<endl;
  }
return 0;
}

// This code appears to be a C++ program that takes an integer n as input, followed by n integers, and then creates a hash table to store the frequency of each input integer. Finally, it takes another integer q as input, followed by q queries for which it outputs the frequency of each queried number.

// Let's break down the code:

// int n;: Declares an integer variable n to store the number of elements.
// cout<<"Enter the value of n"<<endl;: Outputs a prompt to enter the value of n.
// cin>>n;: Reads the value of n from the standard input.
// int arr[n];: Declares an array arr of size n to store the input integers.
// for (int i = 0; i < n; i++): Iterates over each element of the array.
// cin>>arr[i];: Reads each integer from the standard input and stores it in the array arr.
// int hash[13] = {0};: Declares an integer array hash of size 13 and initializes all elements to 0. This array will be used as a hash table to store the frequency of integers.
// for (int i = 0; i < n; i++): Iterates over each element of the input array arr.
// hash[arr[i]] += 1;: Increments the value at the index corresponding to the current element of arr in the hash array. This effectively counts the frequency of each integer in the input array.
// int q;: Declares an integer variable q to store the number of queries.
// cin>>q;: Reads the value of q from the standard input.
// while (q--): Executes the loop q times.
// int number;: Declares an integer variable number to store each query.
// cin>>number;: Reads the query number from the standard input.
// cout<<hash[number]<<endl;: Outputs the frequency of the queried number by accessing the corresponding index in the hash array.
// Now, regarding the choice of hash size [13], it's likely an arbitrary choice based on the requirements of the problem or experimental observation. In this case, the choice of 13 might be because it's a prime number, which can sometimes provide better distribution properties when used as a hash table size. However, without more context about the problem or data being processed, it's hard to determine the optimal hash table size.
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  // precompute
  int hash[100000] = {0};// the maximum size of hash array could be 10^6 and beyond that will give segmentation error
  // but if we declare size of hash array globally that is above int main then it  could go upto 1e7 that is 10^7.
  for (int i = 0; i < n; i++)
  {
     hash[arr[i]]+=1;
  }
  
  int q;
  cin>>q;
  while (q--)
  {
     int number;
     cin>>number;
     //fetch
     cout<<hash[number]<<endl;
  }
return 0;
}

// CHARACTERS HASHING
#include<iostream>
using namespace std;

int main(){
  string s;
  cout<<"string is: "<<endl;
  cin>>s;
  //pre compute
  int hash[26] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i]-'a']++;
  }
  int q;
  cout<<"enter the q"<<endl;
  cin>>q;
  while (q--)
  {
      char c;
      cout<<"enter the character"<<endl;
      cin>>c;
//fetch
cout<<hash[c-'a']<<endl;
  }
  return 0;
}

// For all 256 characters
#include<iostream>
using namespace std;

int main(){
  string s;
  cout<<"string is: "<<endl;
  cin>>s;
  //pre compute
  int hash[256] = {0};
  for (int i = 0; i < s.size(); i++)
  {
    hash[s[i]]++;
  }
  int q;
  cout<<"enter the q"<<endl;
  cin>>q;
  while (q--)
  {
      char c;
      cout<<"enter the character"<<endl;
      cin>>c;
//fetch
cout<<hash[c]<<endl;
  }
  return 0;
}

// !better approach or solution
// ! find the missing number {using hash array}


#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  int hash[1000]={0};
  for (int i = 0; i < n; i++)
  {
     hash[arr[i]]++;
  }
  for (int i = 1; i < n; i++)
  {
      if (hash[i]==0)
      { 
        cout<< i<<" ";
      }
      
  }
  return 0;

}
//! time complexity is awesome that is O(n)+O(n) but the space complexity is O(n) which is quite not fair hence seeing optimal solution
// xor of same number is 0
// 2^2 = 0
// 0^2 = 2 // 0 xor with any number is number itself

//!sum method to solve the missing number question
#include<iostream>
using namespace std;

int main(){
     int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
      cin>>arr[i];
  }
  int total = n*(n+1)*0.5;
  int sum = 0;
  for (int i = 0; i < n-1; i++)
  {
       sum +=arr[i];
  }
  cout<<total-sum<<endl;
return 0;
}

//! FIND THE MAXIMUM CONSECUTIVE ONE'S
#include<iostream>
using namespace std;

int main(){
  int n;cout<<"Enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
   cin>>arr[i];

  }
  int counter  = 0;
  int result = 0;
  for (int i = 0; i < n; i++)
  {
     if (arr[i] == 1)
     {  
      counter++;
     result = max(result, counter);
     }else{  
     counter = 0;
      
     }
  }
cout<<"the maximum count of 1's in given array is: "<<result<<endl;
  
return 0;
}
