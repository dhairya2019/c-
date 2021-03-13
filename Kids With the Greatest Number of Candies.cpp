class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool> b1;
       int n=candies.size();
       int i=0;
       while(i<n){
           if((candies[i]+extraCandies)>=*max_element(candies.begin(),candies.end())){
               b1.push_back(true);
           }
           else
               b1.push_back(false);
           i++;
       }
        return b1;
    }
};
