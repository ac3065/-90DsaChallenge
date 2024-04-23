//! RECURSIVE APPROACH TO BINARY SEARCHING:
// #include<iostream>
// using namespace std;
// int binarySearch(int n,int arr[],int key, int low, int high){

// //! base case:
//   if (low>high)
//   {
//      return -1;
//   }
//   int mid = (low+high)/2;
//   if (arr[mid]==key)
//   {
//       return mid;
//   }else if(arr[mid]>key){
//    return binarySearch(n,arr,key,low,mid-1); 
//   }
//   else{
//     return binarySearch(n,arr,key,mid+1,high);
//   }
  
// }
// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin>>arr[i];
//   }
//   int key;
//   cout<<"enter the key"<<endl;
//   cin>>key;
//   cout<<binarySearch(n,arr,key,0,n-1);
  
//   return 0;
// }
//! FIND THE FIRST AND LAST OCCURENCE OF ELEMENT X
// #include<iostream>
// #include<vector>
// using namespace std;
// pair<int,int> firstAndlast(int n, int arr[], int key){
//   vector<int>temp;
//   for (int i = 0; i < n; i++)
//   {
//      if (arr[i]==key){
//       temp.push_back(i);
       
//      }
//   }
//   return {temp.front(),temp.back()};
// }
// int main(){
//     int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin>>arr[i];
//   }
//   int key;
//   cout<<"enter the key"<<endl;
//   cin>>key;
//   pair<int,int>ans = firstAndlast(n,arr,key);
//   cout<<"first occurence is: "<<ans.first<<" and last occurence is: "<<ans.second<<endl;
// return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
pair<int,int>check_pair(int n,int arr[],int key){
int first = -1;
int last  = -1;
for(int i = 0; i<n; i++){
  if(arr[i]==key){
    if(first == -1){
      first = i;
    }
    last  = i;
  }
}
return {first,last};
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
  cout<<"enter the key"<<endl;
  cin>>key;
  pair<int,int>search = check_pair(n,arr,key);
  cout<<search.first<<" "<<search.second<<endl;
return 0;
}