class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i, max = 0, n = candies.size();
        vector<bool> result(n);

        for(i = 0; i < n; i++){
            if(max < candies[i]){
                max = candies[i];
            }
        }

        for(i = 0; i < n; i++){
            candies[i] += extraCandies;
            result[i] = (candies[i] >= max);\

        }
        return result;
        
    }
};