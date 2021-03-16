class Solution {
public:
    string defangIPaddr(string address) {
        string str = ""; 
        int i=0;
        while(address[i]!='\0'){
           if(address[i]!='.') str+=address[i];
           else str+= "[.]";    
            
            i++;
        }
        return str;
    }
};
