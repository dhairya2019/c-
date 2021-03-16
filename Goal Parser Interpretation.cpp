class Solution {
public:
    string interpret(string command) {
        string test="";
        int i=0;
        while(command[i]!='\0'){
            if(command[i]=='G') test+= "G";
            else if(command[i]=='(' && command[i+1]==')') test+= "o"; 
            else if(command[i]=='(' && command[i+1]=='a' && command[i+2]=='l' && command[i+3]==')') test+= "al";
            i++;
        }
        return test;
    }
};
