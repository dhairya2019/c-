class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0;i<((n/2));i++){
            char swap=s[n-i-1];
            s[n-i-1]=s[i];
            s[i]=swap;
            
        }
       
    }
};
