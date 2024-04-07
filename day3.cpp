//SELECTION SORTING

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
    for (int j = i+1; j < n; j++)
    {
if (arr[i]>arr[j])
{int temp = arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
    }

  }
  for (int i = 0; i < n; i++)
  {
 cout<<arr[i]<<" ";
  }

  return 0;
}

// BUBBLE SORTING

#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "enter the value of n " << endl;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int counter = 1;
  while (counter < n)
  {
    for (int i = 0; i < n; i++)
    {
      if (arr[i] > arr[i + 1])
      {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
      }
      counter++;
    }
  }
  for (int i = 0; i < n; i++)
  {
cout<<arr[i]<<" ";
  }
  return 0;
}

//INSERTION SORTING

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
  for (int i = 1; i <n; i++)
  {
    int current = arr[i];
    int j = i-1;
    while (arr[j]>current && j>=0)
    {
arr[j+1] = arr[j];
j--;
    }
    arr[j+1]=current;
  }
  for (int i = 0; i < n; i++)
  {
cout<<arr[i]<<" ";
  }cout<<endl;
  
return 0;
}