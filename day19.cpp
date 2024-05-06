#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int RotatedSortedArray(int n, int arr[], int target){
  //finding the first index;
  int mini = INT_MAX;
  for (int i = 0; i < n; i++)
  {
      if (arr[i]<mini)
      {
         mini = arr[i];
      }
      
  }
int low = 0; 
int high = n-1;
while (low<=high)
{
  int mid = (low+high)/2;
  if(arr[mid]==target){
    return mid;
  }
  else if (arr[mid]>mini && arr[mid]<=n-1)
  {
     low = mid+1;
  }else {
    high = mid-1;
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
  int target;
  cout<<"Enter the value of target"<<endl;
  cin>>target;
 cout<< RotatedSortedArray(n,arr, target);
return 0;
}