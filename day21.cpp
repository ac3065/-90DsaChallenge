//? binary search problems
//!find the square root of positive integer n
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter n"<<endl;
  cin>>n;
  int ans = 1;
  for (int i = 1; i <= n; i++)
  {
 if (i*i <= n)
 {
ans = i;

 }
else{
  break;
} 
  }
  cout<<ans<<endl;
return 0;
}
//! Search In A 2D Matrix
bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n = mat.size();
    int m = mat[0].size();

    //apply binary search:
    int low = 0, high = n * m - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        int row = mid / m, col = mid % m;
        if (mat[row][col] == target) return true;
        else if (mat[row][col] < target) low = mid + 1;
        else high = mid - 1;
    }
    return false;
}