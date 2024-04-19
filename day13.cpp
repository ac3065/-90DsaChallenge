//! BRUTE FORCE APPROACH (COUNT-INVERSION):
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
     for (int j = i+1; j < n; j++)
     {
         if (arr[i]>arr[j])
         {
              cnt++;
         }
         
     }
     
  }
  cout<<cnt<<endl;
  
return 0;
}
//! Optimal approach
#include<iostream>
#include<climits>

using namespace std;

int main(){
   int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  int maxi = INT_MIN;
  for (int i = 0; i < n; i++)
  {
     cin>>arr[i];
  }
  int pre = 1;
  int suf = 1;
  for(int i = 0; i <n; i++){
    if (pre==0)
    {
  pre = 1;
    }
    else if (suf == 0)
    {
  suf = 1;
    }
  pre = pre * arr[i];
  suf = suf * arr[n-i-1];
  maxi = max(maxi,max(pre,suf));
  }
  cout<<maxi<<endl;
return 0;
}

// //! Missing and Repeating numbers
//? Better  approach: (using HASHMAPS)
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
  }
  int hash[n+1]={0};
  int missing = -1;
  int repeating = -1;
  for (int i = 0; i < n; i++)
  {
     hash[arr[i]]++;
  }
  for (int i = 1; i <=n; i++)
  {
    if (hash[i]==2) repeating = i;
    else if(hash[i]==0) missing = i;
      if (missing != -1 && repeating != -1)//terminate the loop as we get first missing and repeating and hence stop further iterations and hence reduce time of iterating complete.
      {
        break;
      }
      
  }
  cout<<repeating <<" "<<missing<<endl;
return 0;
}//? TAKING O(2N )T.C AND O(N) S.C HENCE space complexity is o(n)is not effiecient solution
//!how it terminates see below the concept:
#include<iostream>
using namespace std;

int main(){
  for (int i = 1; i < 5; i++)
  {
cout<<i<<endl;

  if (i == 3)
  {
break;  }
  
  }
  
return 0;
}

//! optimal approach :
#include<iostream>
#include<vector>
using namespace std;
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    int n = a.size();
    long long s = (n*(n+1))/2;
    long long sn = (n*(n+1)*(2*n+1))/6;
    long long s1 = 0;
    long long s2 = 0;
    for(int i = 0; i<n; i++){
        s1 += a[i];
        s2 += (long long)a[i]*(long long)a[i];
    }
    long long  val1 = s1-s;
    long  long val2 = s2-sn;
    val2 = val2/val1;
    long long  x = (val1+val2)/2;
    long long  y = x-val1;
    return { int(x), int(y) };
}


int main(){
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
 cin>>arr[i];
  }
  vector<int>ans = findMissingRepeatingNumbers(arr);
  cout << "The repeating and missing numbers are: {" << ans[0] << ", " << ans[1] << "}\n";
    
return 0;
}