//!MATRIX 2D ARRAYS

// #include<iostream>
// using namespace std;

// int main(){
//   int n,m;
//   cout<<"enter the value of n and m"<<endl;
//   cin>>n>>m;
//   int a[n][m];
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//        cin>>a[i][j];
//     }
    
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//        cout<<a[i][j]<<"  ";
//     }
//     cout<<endl;
//   }
  
// return 0;
// }
//! UPPER TRIANGULAR MATRIX AND LOWER TRIANGULAR MATRIX SUM

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n, m;
//     cout << "Enter the value of n and m" << endl;
//     cin >> n >> m;

//     int arr[n][m];
//     cout << "Enter the matrix elements:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     vector<int> sum;

//     // Lower Triangular Sum Calculation
//     int lower_sum = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j <= i; j++) {
//             lower_sum += arr[i][j];
//         }
//     }
//         sum.push_back(lower_sum);

//     // Upper Triangular Sum Calculation
//     int upper_sum = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < m; j++) {
//             upper_sum += arr[i][j];
//         }
//     }
//         sum.push_back(upper_sum);

//     // Output the sums
//     for (int i = 0; i < sum.size(); i++) {
//         cout << sum[i] << " ";
//     }

//     return 0;
// }

//! TRANSPOSE OF MATRIX
#include<iostream>
using namespace std;

int main(){
  int n,m;
  cout<<"enter the value of n and m"<<endl;
  cin>>n>>m;
  int a[n][m];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
       cin>>a[i][j];
    }
    
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
       cout<<a[j][i]<<"  ";
    }
    cout<<endl;
  }
  
return 0;
}

//
//! ROTATE MATRIX BY 90 DEGREE
