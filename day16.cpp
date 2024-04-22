//! Remove duplicates from sorted array
//? BRUTE FORCE APPROACH
//todo (USING SET DATASTRUCTURE)
#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n) {
  set < int > set;
  for (int i = 0; i < n; i++) {
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for (int x: set) {
    arr[j++] = x;
  }
  return k;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}


//! Optimal approach 

#include<bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[i] != arr[j]) {
      i++;
      arr[i] = arr[j];
    }
  }
  return i + 1;
}
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}


//! we can also use hashmaps method by storing the frequency of each element and also use two pointer method as well

//! CHAPTER - 2 ( BINARY SEARCH )
#include<iostream>
using namespace std;
int binarySearch(int n,int arr[],int key){
  int s = 0; 
  int e = n-1;
  int mid = (s+e)/2;
  for (int i = 0; i < n; i++)
  {
     if (arr[mid]==key)
     {
        return mid;
     }else if (arr[mid]>key)
     {
        e = mid-1;
     }else{
      s = mid+1;
     }    
  }
  
}
int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
     cin>>arr[i]; 
  }
  int key;
  cout<<"enter the value of key"<<endl;
  cin>>key;
  cout<<binarySearch(n,arr,key);
  
return 0;
}
