//! FIND SECOND LARGEST
#include<iostream>
#include<vector>
using namespace std;

void merge(int n, vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) { // Fixed the condition
            temp.push_back(arr[left]);
            left++;
        } else { // Removed redundant condition
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) { // Corrected loop condition
        arr[i] = temp[i - low];
    }
}

void mergeSort(int n, vector<int>& arr, int low, int high) {
    if (low >= high) // Added base case for recursion termination
        return;
    int mid = (low + high) / 2;
    mergeSort(n, arr, low, mid);
    mergeSort(n, arr, mid + 1, high);
    merge(n, arr, low, mid, high);
}

int main() {
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    mergeSort(n, arr, 0, n - 1);
    int largest = arr[n - 1];
    int second_largest = -1; // Initialized to a value that won't conflict
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] != largest) {
            second_largest = arr[i];
            break;
        }
    }
    if (second_largest != -1) // Added condition to handle edge case when second_largest not found
        cout << second_largest << endl;
    else
        cout << "There is no second largest element." << endl; // Message for edge case
    //second smallest

    return 0;
}

//! FIND SECOND LARGEST AND SECOND SMALLEST ELEMENT IN ARRAY
#include<iostream>
#include<climits>
#include<vector>
using namespace std; 

int slargest(int n, vector<int> arr){
int  sl = INT_MIN;
int   l = arr[0];
for(int i=0; i<n; i++){
  if(arr[i]>l){
    sl = l;
    l = arr[i];
  }else if(arr[i]>sl && arr[i]< l){
    sl = arr[i];
  }
}
return sl;
}


int ssmallest(int n, vector<int>arr){
  int sl = INT_MAX;
  int ssl = arr[0];
  for (int i = 0; i < n; i++)
  {
if (arr[i]<sl)
{
ssl = sl; 
sl = arr[i];
}else if(arr[i]!=sl && arr[i]<ssl){
  ssl = arr[i];
}
  }
  return ssl;
}


int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  vector<int> arr(n);
  for(int i = 0; i<n; i++){
    cin>>arr[i];
  }
     int second_largest = slargest(n,arr);
    int second_smallest = ssmallest(n,arr);
    
    cout << "Second Largest Element: " << second_largest << endl;
    cout << "Second Smallest Element: " << second_smallest << endl;
}