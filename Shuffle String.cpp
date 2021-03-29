class Solution {
public:
    string restoreString(string s, vector<int>& v) {
         for(int i=0;i<v.size();i++){
             for(int j=0;j<v.size();j++){
                 if(v[i]>=v[j]){
                     swap(s[i],s[j]);
                     swap(v[i],v[j]);
                     
                 }
                 cout<<s;
             }
         }
        
        reverse(s.begin(), s.end());
        return s;
    }
   
};
