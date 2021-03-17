class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> candy;
        int n =candyType.size();
        int eat=n/2;
        int i=0;
        while(i<n){
            candy.insert(candyType[i]);
            i++;
        }
        if(candy.size()<=eat) return candy.size();
        else return eat;
        
    }
};
