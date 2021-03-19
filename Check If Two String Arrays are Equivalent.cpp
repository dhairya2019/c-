class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
       int i=0,j=0;
        string a="",b="";
       while(i<word1.size()){
           a+=word1[i];
           
           
           i++;
       }
        while(j<word2.size()){
           b+=word2[j];
           
           
           j++;
       }
       
        if(a==b) return true;
         else return false;
    }
  
};
