//! LEFT ROTATE THE ARRAY BY d PLACE: 
// #include<iostream>
// using namespace std;
// int main(){
//   int n,d;
//   cout<<"Enter the value of n "<<endl;
//   cin>>n;
//   cout<<"Enter the value of d"<<endl;
//   cin>>d;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
//   d = d%n;
//   int temp[d];
//   //storing the element going at back
//   for (int i = 0; i < d; i++)
//   {
//     temp[i] = arr[i];
//   }
//   //loop from d to n and moving all elements to front
//   for (int i = d; i < n; i++)
//   {
//      arr[i-d] = arr[i];
//   }
//   for (int i = n-d; i < n; i++)
//   {
//     arr[i] = temp[i-(n-d)];
//   }
//   //! printing the array
//   for (int i = 0; i < n; i++)
//   {
// cout<<arr[i]<<" ";
//   }
//   return 0;
    
    
// }

//! Move all zeroes to end of the array
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "enter the value of n" << endl;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
  
//     int j = -1;
//     for (int i = 0; i < n; i++) {
//         if (arr[i] == 0) {
//             j = i;
//             break;
//         }
//     }
//     for (int i = j + 1; i < n; i++) {
//         if (arr[i] != 0) {
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
  
//     return 0;
// }

//! Remove duplicates from  array (using extra space)
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> temp;
    temp.push_back(arr[0]); // Push the first element to temp vector
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            temp.push_back(arr[i]); // Push non-duplicate elements to temp vector
        }
    }
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < temp.size(); i++) {
        cout << temp[i] << " ";
    }

    return 0;
}
