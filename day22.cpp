! Problem statement
You are given a number ’n’.



Find the number of digits of ‘n’ that evenly divide ‘n’.



Note:
A digit evenly divides ‘n’ if it leaves no remainder when dividing ‘n’.


Example:
Input: ‘n’ = 336
#include<iostream>
using namespace std;
int count_N(int n){
  int a =n;//the number itself
  int c = 0;//count
  int r = 0;//remainder
while (n>0)
{
 r=n%10;
 if(r==0){
  n  = n/10;
  continue;
 }else if(a%r==0){
  c++;
 }
 n = n/10;
}
return c;
}
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
 cout<< count_N(n);
return 0;
}
