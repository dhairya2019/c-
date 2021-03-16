class Solution {
public:
    string plusdot(string value)
  {
    string r_dot="";
    int i=0;
    for(int i=0;i<value.size();i++)
       {
           if(value[i]!='.' && value[i]!='+' && i<value.find("@")) r_dot+= value[i];
           else if(value[i]=='.' && i<value.find("@") ) continue; 
           else if(value[i]=='+' && i<value.find("@"))  i=value.find("@")-1;
           else if(i>=value.find("@")) r_dot+= value[i];
           else continue;  
       }
    return r_dot;   
  }

    int numUniqueEmails(vector<string>& emails) {
     set<string> email;
     for(int i=0;i<emails.size();i++){
         string test=plusdot(emails[i]);
         email.insert(test);
      }  
        return email.size();
    }  
  
};



