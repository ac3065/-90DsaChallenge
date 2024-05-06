//! find the first and last occurence of element x( using binary search approach - Optimal approach):
// #include<iostream>
// using namespace std;
// int first_Occurence(int n, int arr[], int x){
//   int low = 0; 
//   int high = n-1;
//   int first = -1;
//   while(low<=high){
//   int mid = (low+high)/2;
//     if (arr[mid]==x)
//     {
//        first = mid;
//        high = mid-1;
//     }else if (arr[mid]>x)
//     {
//       high = mid-1;
//     }else{
//        low = mid+1;
//     }
    
    
//   } 
//   return first;
// }
// int last_Occurence(int n, int arr[], int x){
//   int low = 0;
//   int high = n-1;
//   int last = -1;
//   while (low<=high)
//   {
//   int mid = (low+high)/2;
//     if (arr[mid]==x)
//     {
//        last = mid;
//        low = mid+1;
//     }else if(arr[mid]>x){
//       high = mid-1;
//     }else{
//       low = mid+1;
//     }
    
//   }
//   return last;
  
// }
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//          cin>>arr[i];
//   }
//   int x;
//   cout<<"enter the element x: "<<endl;
//   cin>>x;

//   int ans = first_Occurence(n,arr,x);
//   if (ans != -1 )
//   {
//   cout<<"firs occurence: "<<ans<<endl;  
//   int ans2 = last_Occurence(n,arr,x);
//   cout<<"last occurence is "<<ans2<<endl;
//   // cout<<"first occurence of element " <<x<<" is: "<<ans<<" and the last occurence is: "<<ans2<<endl;
//   } 
//   cout<<"running bro!"<<endl; 
// return 0;
// }