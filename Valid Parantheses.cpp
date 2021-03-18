#include<bits/stdc++.h>
class Solution {
public:
    bool isValid(string s) {
      stack<char> s1;
      s1.push(-1);
      for(int i=0;i<s.size();i++){
        if(s[i]=='(')  s1.push('(');
        else if(s[i]=='[')  s1.push('[');
        else if(s[i]=='{')  s1.push('{');
        else if(s[i]==')' && s1.top()==-1 ) return false;
        else if(s[i]==']' && s1.top()==-1  ) return false; 
        else if(s[i]=='}' && s1.top()==-1  )  return false;
        else if(s[i]==')' && s1.top()=='(')  s1.pop();
        else if(s[i]==']' && s1.top()=='[')  s1.pop();
        else if(s[i]=='}' && s1.top()=='{')  s1.pop();
        else return false;
          
          
      }  
        
        if(s1.top()==-1) return true;
        else return false;    
    }
};
