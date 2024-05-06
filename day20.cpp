//! FIND PEAK ELEMENT
// #include<iostream>
// using namespace std;
// int findPeakElement(int arr[], int n, int low, int high){
// int mid = (low + (high-low))/2;
// if ((mid == 0 || arr[mid-1] <= arr[mid])&& (mid == n-1 || arr[mid+1]<=arr[mid]))
// {
//     return mid;
// }
// else if(mid>0 && arr[mid-1]>arr[mid]){//to go left side
// return findPeakElement(arr,n,low, mid-1);
// }
// else{
//   return findPeakElement(arr,n,mid+1,high); 
// }
// }
// int main(){
//   int n; 
//   cout<<"enter the value of  n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//        cin>>arr[i];
//   }
//  int ans =  findPeakElement(arr,n,0,n-1);
//   cout<<"Peak element in the array is: "<<ans<<endl;
// return 0;
// }