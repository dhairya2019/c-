class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string a="",b="";
        if(S.compare(T)==0)
        return true;  
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='#')
            {
                if(a.size()==0) continue;
                a.erase(a.size()-1,a.size());
            }
            else a+=S[i];
        }
        for(int j=0;j<T.size();j++)
        {
            
            if(T[j]=='#')
            {
                if(b.size()==0) continue;
                b.erase(b.size()-1,b.size());
            }
            else b+=T[j];
        }
    
    if(a.compare(b)==0) return true;
    else return false;
        
        
       
    }
};
