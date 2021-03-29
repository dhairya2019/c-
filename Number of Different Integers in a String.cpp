class Solution {
public:
    int numDifferentIntegers(string word) {
      set<string> uq;
     
      for(int i=0;i<word.size();i++)
      {
          string s="";  
          if(word[i]>='0' && word[i]<='9')
          {
              while(word[i]>='0' && word[i]<='9')
              {
                s += word[i];
                i++;
              }
          
             while(s.size()>1 && s[0]=='0') s.erase(0,1);
             uq.insert(s);
          }
      }
        
        return uq.size();
    }
};
