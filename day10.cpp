//! Rearrange the array in alternating positive and negative items
 //? BRUTE FORCE APPROACH
#include<iostream>
#include<vector>
using namespace std;
vector<int> rearrange(int n, vector<int> arr){
vector<int>pos;
vector<int>neg;
for (int i = 0; i < n; i++)
{
 if(arr[i]>0){
  pos.push_back(arr[i]);
 }else{
  neg.push_back(arr[i]);
 }
}
for (int i = 0; i < n/2; i++)
{
 arr[2*i] = pos[i];
 arr[2*i+1] = neg[i];
}
return arr;

}

int main(){
  int n;
  cout<<"Enter the value of n"<<endl;
  cin>>n;
  vector<int>arr(n);
  for (int i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  vector<int> ans = rearrange(n,arr);
 for (int i = 0; i < n; i++)
 {
    cout<<arr[i]<<" ";
 }
 
return 0;
}
// if we pass by reference array then there would be no need to return our array from function to main hence we can make changes to originnal array in function and print directly to main. so for that we make our function void

//! BETTER APPROACH
#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrange(int n, vector<int> &arr) {
    vector<int> ans(n);
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            ans[pos] = arr[i];
            pos += 2;
        } else {
            ans[neg] = arr[i];
            neg += 2;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans = rearrange(n, arr); // Store the result in a separate vector

    cout << "Rearranged array: ";
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " "; // Print the rearranged array from the returned vector
    }
    cout << endl;

    return 0;
}

//! Superior element/leaders in array
#include <iostream>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

vector<int> leaders(int n, int arr[]) {
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--) { // Iterate from right to left
        if (arr[i] > maxi) {
            ans.push_back(arr[i]); // Current element is superior, add it to the result
            maxi = arr[i]; // Update maximum
        }
    }
    reverse(ans.begin(), ans.end()); // Reverse the result to match the original order
    return ans;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = leaders(n, arr);

    cout << "Superior elements: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
