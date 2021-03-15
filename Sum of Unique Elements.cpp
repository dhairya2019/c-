class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
     unordered_map<int,vector<int>> mp;
     int n=nums.size();
     vector<int> v1;
     int i=0;
        for(int i=0;i<n;i++){
            int key=nums[i];
            mp[key].push_back(i);
        }
        
        for(auto j:mp){
            if(j.second.size()==1) v1.push_back(j.first);
            else continue;
        }
     int sum= accumulate(v1.begin(), v1.end(), 0); 
      return sum;  
    }
};
