#include<bits/stdc++.h>
int Solution::solve(string A) {
    stack<char> s;
    s.push(-1);
    for(int i=0;i<A.size();i++){
         if(A[i]=='(')  s.push('(');
         else if(A[i]==')' && s.top()==-1) return 0;
        else if(A[i]==')' && s.top()=='(') s.pop();
    }
    
    if(s.size()==1) return 1;
    else return 0;
}
