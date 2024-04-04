//! count number of digits
#include<iostream>
using namespace std;
int main(){
  long long n;
  cout<<"enter number"<<endl;
  cin>>n;
  long long count = 0;
  
  while (n>0)
  {
    n = n/10;
    count++;  
  }
cout<<count<<endl;
return 0;
}

// ! PRINT N TO N TIMES 
#include<iostream>
using namespace std;
void print(int n, int i){
  if(i>=n){
    return;
  }
  i++;
  cout<<n<<endl;
  print(n,i);
}
int main(){
  int n;
  cout<<"n";
  cin>>n;
  print(n,0);
return 0;
}
// ! check for the prime number
#include<iostream>
using namespace std;
bool check_Prime(int n){
  if (n<=1)
  {
 return false;
  }
  for (int i = 2; i < n; i++)
  {
if (n%i==0)
{return false;}

  }
  return true;

}
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  if(check_Prime(n)){
cout<<"given number is prime number"<<endl;
  }else{
    cout<<"It is not a prime number"<<endl;
  }
return 0;
}
// ! reverse array

#include<iostream>
using namespace std;
void reverse(int n, int arr[]){
  int start = 0;
  int end = n-1;
  while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void print(int n,int arr[]){
  cout<<"this is the reversed array";
  for (int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
  }
  
}
int main(){
  int n;
  cout<<"enter n"<<endl;cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
cin>>arr[i];
  }
  reverse(n,arr);
  print(n,arr);
 return 0; 
}

// !reverse array using recursion

#include<iostream>
using namespace std;
void reverse(int arr[],int i){

//base case
if (i<0)
{
return;
}

if (i>=0)
{
cout<<arr[i]<<" ";
reverse(arr,i-1);//recursive call
}

}
int main(){
  int n = 5;
  int arr[n] = {2,3,4,5,6};
  reverse(arr,n-1);
  return 0;

}
// ! prime  number
#include<iostream>
using namespace std;
bool check_prime(int n){
  if(n<=1){
    return false;
  }
  for (int i = 2; i < n; i++)
  {
    if (n%i==0)
    {
     return false;
    }
    
  }
  return true;
}
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
 bool check=  check_prime(n);
 if (check)
 {
cout<<"It is a prime number"<<endl;
 }else{
  cout<<"It is not a prime number"<<endl;
 }
 return 0;
 
}

// ! Check palindrome!
#include<iostream>
using namespace std;
bool pali(string s, int i, int j){
  if (i>j || s.length()==0)
  {
return true;
  }
  
  while (i<=j)
  {
    if (s[i]==s[j])
    {
      i++;
      j--;
    }
    
  }
 return false;
}
int main(){
  string s = "nadfman";
  int n = s.length();
  bool check = pali(s,0,n-1);
  if (check)
  {
cout<<"Palindrome is present in string"<<endl;
  }else{
    cout<<"palindrome doesn't exist"<<endl;
  }
  return 0; 
}
//! Check armstrong

#include <iostream>
#include <cmath> // Needed for pow() function

using namespace std;

bool isArmstrongNumber(int num) {
    int originalNum = num; // Store original number for comparison
    int numberOfDigits = 0;
    int sum = 0;

    // Count the number of digits
    while (num > 0) {
        numberOfDigits++;
        num /= 10;
    }

    // Calculate the sum of digits raised to the power of number of digits
    num = originalNum; // Reset num to original number
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numberOfDigits);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if (isArmstrongNumber(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
