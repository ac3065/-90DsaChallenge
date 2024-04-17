//! BRUTE FORCE APPROACH
//TODO-  How to generate Subarrays:

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
  for (int i = 0; i < n; i++)
  {
     for (int j = i; j < n; j++)
     { cout << "[";
        for (int k = i; k <= j; k++)
        {
          cout<<arr[k];
        }
         cout << "]";
         cout<<endl;
     }
     
  }
  
  
return 0;
}

//! FIND THE SUBARRAY IN AN ARRAY THAT HAS MAXIMUM SUM
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
//     cin>>arr[i];
//   }
//  int max_sum = INT_MIN;
//   for (int i = 0; i < n; i++)
//   {
//      for (int j = i; j < n; j++)
//      {
//        int sum = 0;

//         for (int k = i; k <= j; k++)
//         {
//            sum+=arr[k];
//         }
//     max_sum = max(max_sum,sum); //only needs to update the new maximums sum, no need to print new subarray from next line, hence cout<<endl is avoided
//      }
//   }
//   cout<<max_sum<<endl;
  
// return 0;
// }
//! optimal apprach for above code : KADANE'S ALGRORITHM
#include<iostream>
#include<climits>
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
 int max_sum = INT_MIN;
 int current_sum = 0;
 for (int i = 0; i < n; i++)
 {
    current_sum+=arr[i];
    if(current_sum<0){
      current_sum = 0;
    }
max_sum = max(max_sum,current_sum);
 }
cout<<max_sum<<endl;
  
return 0;
}

//! wrong intution and there reason is:

#include<iostream>
using namespace std;

int main() {
char a;
cout<<"enter the character"<<endl;
cin>>a;
int c_num1 = a-'A';
if(c_num1>=65&&c_num1<=90){
cout<<"1"<<endl;
}else if(c_num1>=97 && c_num1<=122){
	cout<<"0"<<endl;
}else{
	cout<<"-1"<<endl;
}
return 0;
}
I understand, let's clarify further.

// Your code works correctly for uppercase letters because when you subtract `'A'` from an uppercase letter, you get a value between `0` and `25`, which corresponds to the position of the letter in the alphabet. This aligns with your intention to categorize uppercase letters.

// However, the problem arises with lowercase letters. When you subtract `'A'` from a lowercase letter, you get a negative number because the ASCII value of lowercase letters is greater than that of uppercase letters. 

// For example:

//? - ASCII value of `'a'` is `97`, and ASCII value of `'A'` is `65`. So, `c_num1` will be `97 - 65 = 32`.
//? - Similarly, ASCII value of `'b'` is `98`, and ASCII value of `'A'` is `65`. So, `c_num1` will be `98 - 65 = 33`.

//? These values are outside the range you're checking in your `if` conditions (`>= 65 && <= 90` for uppercase letters).
//! so either you  compare your solution directly to 'A' or 'a' or know the range correctly according to set character-'A';
// To fix this, you have a couple of options:

// 1. Convert the input character to uppercase before performing the subtraction, so you're always dealing with uppercase values.
// 2. Adjust your `if` conditions to account for lowercase letters by checking the range of ASCII values for lowercase letters (`>= 97 && <= 122`).

// Let me know if you'd like further clarification or if you have any other questions!
//!corrected form of the above code: 
#include <iostream>
using namespace std;

int main() {
    char a;
    cout << "enter the character" << endl;
    cin >> a;

    int c_num1 = a - 'A';

    if (a >= 'A' && a <= 'Z') {
        cout << "1" << endl;
    } else if (a >= 'a' && a <= 'z') {
        cout << "0" << endl;
    } else {
        cout << "-1" << endl;
    }

    return 0;
}

//! Generate the Pascal Triangle
#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>pascalTriangle(int n){
  vector<vector<int> > pascal(n);
  for (int i = 0; i < n; i++)
  {
   pascal[i].resize(i+1);
  for (int j = 0; j < i+1; j++)
  {
   if(j==0 || j==i){
    pascal[i][j] = 1;
   }else{
    pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
   }
  }
}
return pascal;
}

int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  vector<vector<int>>ans;
  ans = pascalTriangle(n);
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < ans[i].size(); j++)
    {
        cout<<ans[i][j]<<" ";
    }cout<<endl; 
  }  
return 0;
}