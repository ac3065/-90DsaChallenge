//! STANDARD TEMPLATE LIBRARY (STL)

//? ARRAYS: (sequence - containers)
// #include<iostream>
// #include<array>
// using namespace std;

// int main(){
// array<int,5> a = {1,2,3,4,5};
// int size = a.size();
// for (int i = 0; i < a.size(); i++)
// {
//   cout<<a[i]<<endl;
// }
//  cout<<"Element at 2nd index -> "<<a.at(2)<<endl;
//  cout<<"Empty or not -> "<<a.empty()<<endl;
//  cout<<"First Element -> "<<a.front()<<endl;
//  cout<<"End Element -> "<<a.back()<<endl;
 
// return 0;
// }

//? VECTORS:
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//   vector<int>v;
//   vector<int> a(5,1);
//   cout<<"prinnt a"<<endl;
//   for(int i :a){
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   vector<int>last(a);
//   for(int i : last){
//     cout<<i<<" ";
//   }cout<<endl;
//   //capacity -> no. of memory allocated
//   //size -> how many elements currently it have
//   cout<<"Capacity of vector v  ->"<<v.capacity()<<endl;
//   cout<<"Size of vector v ->"<<v.size()<<endl;
//   v.push_back(1);
//   cout<<"Capacity of vector v ->"<<v.capacity()<<endl;
//   cout<<"Size of vector v after pushing 1->"<<v.size()<<endl;
//   v.push_back(2);
//   cout<<"Capacity of vector v ->"<<v.capacity()<<endl;
//   cout<<"Size of vector v ->"<<v.size()<<endl;
//   v.push_back(3);
//   cout<<"capacity of vector v ->"<<v.capacity()<<endl;
//   cout<<"Size of vector v ->"<<v.size()<<endl;
//   cout<<"front "<<v.front()<<endl;
//   cout<<"front "<<v.back()<<endl;
//   cout<<"Element at 2nd index "<<v.at(2)<<endl;
//   cout<<"back "<<v.back()<<endl;
//   cout<<"before pop"<<endl;
//   for(int i:v){
//     cout<<i<<" ";
//   }cout<<endl;
//   v.pop_back();
//   for(int i:v){
//     cout<<i<<" ";
//   }cout<<endl;
  
//   cout<<"before clear size"<<v.size()<<endl;
//   v.clear();
//   cout<<"after clear size"<<v.size()<<endl;
//   cout<<"after clear capacity"<<v.capacity()<<endl;
//   return 0;
// }

//! DEQUEUE
// #include<iostream>
// #include<deque>
// using namespace std;

// int main(){
//   deque<int> d;
//   d.push_back(1);
//   d.push_front(2);
//   for(int i :d){
//     cout<<i<<" ";
//   }
//   // d.pop_back();
//   // cout<<endl;
//   // for(int i :d){
//   //   cout<<i<<" ";
//   // }
//   cout<<endl;
//   // d.pop_front();
  
//   for(int i :d){
//     cout<<i<<" ";
//   }
//   cout<<"print first index element"<<d.at(1)<<endl;
//   cout<<"front"<<d.front()<<endl;
//   cout<<"back"<<d.back()<<endl;
//   cout<<"empty or not "<<d.empty()<<endl;
//   cout<<"befor erase "<<endl;
//   d.erase(d.begin(),d.begin()+1);
//   cout<<"after erase "<<d.size()<<endl;
//   for (int i:d){
//     cout<<i<<endl;
//   }

//   return 0;
// }

//! lists
// #include<iostream>
// #include<list>
// using namespace std;

// int main(){
//   list <int> l;
//   list <int> n(5,100);
//   cout<<"Printing n"<<endl;
//   for(int i : n){
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   l.push_back(1);
//   l.push_front(2);
//   for(int i: l){
//     cout<<i<<" ";
//   }
//   cout<<endl;
//   l.erase(l.begin());
//   cout<<"after erase"<<endl;
//   for(int i:l){
//  cout<<i<<" ";
//   }cout<<endl;
//   cout<<"size of list"<<l.size()<<endl;
// return 0;
// }

//! Stack (LIFO)
#include<iostream>
// #include<stack>
// using namespace std;

// int main(){
// stack<string>s;
// s.push("Shri");
// s.push("krishna");
// s.push("Radha");
// s.push("ji");
// cout<<"top element "<<s.top()<<endl;
// cout<<"size of stack "<<s.size()<<endl;
// cout<<"Empty or not "<<s.empty()<<endl;
// return 0;
// }
//! Queue (FIFO)
// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//   queue<string>q;
//   q.push("love");
//   q.push("Babbar");
//   q.push("Kumar");
//   cout<<"first element  "<<q.front()<<endl;
//   q.pop();
//   cout<<"second element  "<<q.front()<<endl;
//   q.pop();  
//   cout<<"first element  "<<q.front()<<endl;
//   cout<<"size after pop "<<q.size()<<endl;
// return 0;
// }
//! SET -> stores unique element and return in sorted order:
// #include<iostream>
// #include<set>
// using namespace std;

// int main(){
//   set<int> st;
//   st.insert(9);
//     st.insert(1);
//       st.insert(2);
//         st.insert(3);
//           st.insert(4);
//           st.insert(4);
//           st.insert(5);
//           st.insert(5);
//           st.insert(5);
//         for(auto i:st){
//           cout<<i<<endl;
//         }cout<<endl;
// set<int>::iterator it = st.begin();
// it++;
// st.erase(it);
// for(auto i:st){
//   cout<<i<<endl;
// }
// cout<<endl;
// cout<<"-5 is present or not "<<st.count(-5);
// cout<<endl;
// set<int>::iterator itr = st.find(5);
// for(auto it = itr;it!=st.end();it++){
//   cout<<*it<<" ";
// }cout<<endl;
// return 0;
// }

//!Pairs
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   pair<int, int> p1 = {1,3};
//   cout<<p1.first<<" "<<p1.second<<endl;
//   pair<int,pair<int,int>>p = {1,{3,4}};
//   cout<<p.first<<" "<<p.second.second<<" "<<p.second.first<<endl;;
//   pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
//   cout<<arr[1].second;
// return 0;
// }

//! two sum problem
// #include<bits/stdc++.h>
// #include<vector>
// #include<iostream>
// using namespace std;
// pair<int,int> two_sum(int n, vector<int>arr, int target){
//   int left = 0;
//   int right = n-1;
//   while (left<right)
//   { 
//     int sum = arr[left]+arr[right];
//     if(sum == target){
//       return {arr[left],arr[right]};
//     }else if(sum<target){
//       left++;
//     }else{
//       right--;
//     }
//   }
//   return {-1,-1};
// }

// int main(){
//   int n;
//   cout<<"enter the value of n"<<endl;
//   cin>>n;
//   vector<int>arr(n);
//   for (int i = 0; i < n; i++)
//   {
// cin>>arr[i];
//   }
  
//   int target;
//   cout<<"enter the target"<<endl;
//   cin>>target;
//   //we cannot directly print pair result returning from above function:
// //  cout<< two_sum(n,arr,target);
//  pair<int, int> result = two_sum(n, arr, target);
//     if (result.first != -1 && result.second != -1) {
//         cout << "Result: " << result.first << " " << result.second << endl;
//     } else {
//         cout << "No two elements sum up to the target." << endl;
//     }
// return 0;
// }

//! MAJORITY ELEMENT
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();
    int cnt = 0; // count
    int el; // Element

    //applying the algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            el = v[i];
        }
        else if (el == v[i]) cnt++;
        else cnt--;
    }

    //checking if the stored element
    // is the majority element:
    int cnt1 = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) cnt1++;
    }

    if (cnt1 > (n / 2)) return el;
    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 2, 2, 2,3,3};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
