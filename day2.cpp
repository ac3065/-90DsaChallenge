#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
for (int j = 0; j <n-2 ; j++)
{
cout<<" * ";
}
cout<<endl;
  }
  return 0;
}

// 6
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 0; i < n; i++)
  {
for (int j = 0; j <n ; j++)
{
cout<<" * ";
}
cout<<endl;
  }
  return 0;
}

// enter the value of n
// 4
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *
//  *  *  *  *

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 1; i <=n ; i++)
  {
for (int j =1 ; j <=i ; j++)
{
cout<<" * ";
}
cout<<endl;
  }
  return 0;
}
// enter the value of n
// 4
//  *
//  *  *
//  *  *  *
//  *  *  *  *

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 1; i <=n ; i++)
  {
for (int j =i ; j <=n ; j++)
{
cout<<"*";
}
cout<<endl;
  }
  return 0;
}
// enter the value of n
// 4
// ****
// ***
// **
// *

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n"<<endl;
  cin>>n;
  for (int i = 1; i <=n; i++)
  {
for (int j = 0; j <i ; j++)
{
  cout<<" ";
}
for ( int k = i; k <=n ; k++)
{
  cout<<"*";
}
cout<<endl;

  }
  return 0;
}

// enter n
// 4
//  ****
//   ***
//    **
//     *

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 0; i <n ; i++)
  {
    for (int j = i; j <n-1 ; j++)
    {
cout<<" ";
    }
    
for (int k =0 ; k <(2*i+1); k++)
{
cout<<"*";
}
cout<<endl;
  }
  return 0;
}

// enter the value of n
// 4
//    *
//   ***
//  *****
// *******

#include<iostream>
using namespace std;

int main(){
  string s = "geeks";
  int n = s.length();
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j <n-1; j++)
    {
 cout<<".";
    }
for (int k = 0; k < i+1; k++)
{
  cout<<s[k];
}
    cout<<endl;
    }
    return 0;
  }
// ....g
// ...ge
// ..gee
// .geek
// geeks


#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n"<<endl;
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
for (int j = n; j>=i; j--)
{
cout<<"*";
}
cout<<endl;
  }
  return 0;
}
// enter n
// 5
// *****
// ****
// ***
// **
// *


#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter n"<<endl;
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    for (int k = 0;k<i; k++)
    {
      cout<<" ";
    }
    
for (int j = n; j>=i; j--)
{
cout<<"*";
}
cout<<endl;
  }
  return 0;
}

// enter n
// 5
//  *****
//   ****
//    ***
//     **
//      *

#include<iostream>
using namespace std;

int main(){
  int n;cout<<"enter the value of n"<<endl;cin>>n;
  for (int i = 1; i <=n; i++)
  {
    for (int k = 1; k <= n-i; k++)
    {
cout<<" ";
    }
    
    
for (int j = 1; j <= i; j++)
{
 cout<<"* ";
}
cout<<endl;
  }
  
return 0;
}

// enter the value of n
// 4
//    *
//   * *
//  * * *
// * * * *

#include<iostream>
using namespace std;

int main(){
  int n;cout<<"enter the value of n"<<endl;cin>>n;
  for (int i = 1; i <=n; i++)
  {
    for (int k = 0; k <i; k++)
    {
cout<<" ";
    }
    
    
for (int j = 1; j <= n-i+1; j++)
{
 cout<<"* ";
}
cout<<endl;
  }
  
return 0;
}

// enter the value of n
// 4
//  * * * *
//   * * *
//    * *
//     *

#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 1; i <=n ; i++)
  {
for (int j =1 ; j <=i ; j++)
{
cout<< i <<" " ;
}
cout<<endl;
  }
  return 0;
}

// enter the value of n
// 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4


#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  for (int i = 1; i <=n ; i++)
  {
for (int j =1 ; j <=i ; j++)
{
cout<< j <<" " ;
}
cout<<endl;
  }
  return 0;
}
// enter the value of n
// 5
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<endl;
    num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}
// enter the value of n
// 5

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int num = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
         char ch = char(num);
         cout<<ch<<" ";
            num++;
        }
        cout<<endl;
    }

    return 0;
}

// enter the value of n
// 4
// A 
// B C 
// D E F 
// G H I J 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int num = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
         char ch = char(num);
         cout<<ch<<" ";
            
        }
        num++;
        cout<<endl;
    }

    return 0;
}

// enter the value of n
// 4
// A 
// B B 
// C C C 
// D D D D 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int mid = (n/2)+1;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i== mid|| j==mid|| (i==1&&j>=mid)||(j==1 && i<=mid)|| (i == n && j<=mid)||(j==n&&i>=mid))
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;

}

// Enter the value of n
// 7

// *  ****
// *  *   
// *  *   
// *******
//    *  *
//    *  *
// ****  *

// #include<iostream>
// using namespace std;
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int r = 1;
// for(int i = 1; i<=n;  i++){
//   for (int j = 1; j <= i; j++) {
//     cout << r;
//     r++;
//   }
//   for (int k = 1; k <= n - i ; k++){
//       cout<<" ";
//   }
//     cout<<endl;
// }
// return 0;
// }