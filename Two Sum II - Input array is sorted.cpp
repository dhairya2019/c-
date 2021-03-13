class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> v1;
        int n=numbers.size();
        int a1=0,b1=n-1;
        for(int i=0;i<n-1;i++){
            if((numbers[a1]+numbers[b1])==target){
                v1.push_back(a1+1);
                v1.push_back(b1+1);
                break;
            }
            if((numbers[a1]+numbers[b1])!=target){
               if((numbers[a1]+numbers[b1])>target){
                 b1--;
               }
               else
                 a1++;
               }   
        }
         return v1;    
    }
};
