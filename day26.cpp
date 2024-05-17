//! check if the sentence is panagram
class Solution {
public:
    bool checkIfPangram(string sentence) {
     vector<int> arr(26,0);
      for(char &ch:sentence){
        if(ch>='a'&&ch<='z'){
            int index = ch - 'a';
            arr[index]++;
        }
      }
      for(int &count:arr){
        if(count==0){
            return false;
        }
      }
      return true;  
    }
};

//!compress the string
#include <bits/stdc++.h> 
string compressTheString(string &s)
{
	  int n = s.size();
    string result; // This will hold the compressed string
    int i = 0;
    
    while (i < n) {
        char curr_char = s[i];
        int count = 0;
        // Find count of duplicates
        while (i < n && s[i] == curr_char) {
            count++;
            i++;
        }
        // Append the character to the result
        result += curr_char;
        // Append the count to the result if greater than 1
        if (count > 1) {
            result += to_string(count);
        }
    }
    
    return result;
}
