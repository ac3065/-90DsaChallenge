//! remove outermost parenthesis
class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=0;
        string res="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
count++;
                if(count>1){
                    res+=s[i];
                }
            }else if(s[i]==')'){
                count--;
                if(count>0){
                    res+=s[i];
                }
            }
        
        
        }  
        return res;
            }
};