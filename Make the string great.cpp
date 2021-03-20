class Solution {
public:
    string makeGood(string s) {  
        string name="";
        cout<<"hello";
        bool flag=true;
      for(int i=0;i<s.size();i++){
          if(abs(s[i]-s[i+1])==32) {
              i++;
              flag=false;
          }
          else name+= s[i];
      }
        if(flag) return name;
        return makeGood(name);
    }
};
                                 
        
