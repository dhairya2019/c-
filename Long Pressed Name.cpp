class Solution {
public:
    bool isLongPressedName(string name, string typed) {
     int i=0,j=0;
        if(name.compare(typed)==0) return true;
     while(i<name.size() || j<typed.size()){
         
         if(name[i]==typed[j]){
             j++;
             i++;
         }
         
             else{
                if(i==0) return false;
                if( typed[j]==typed[j-1]) j++;
                 else return false;
                
             }  
     }
        return (i==name.size() && j==typed.size());

    }
};
