class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long total=0;
        for(int i=0;i<n;i++){
            int mini=nums[i];
            int maximum=nums[i];
            for(int j=i;j<n;j++){
                mini=min(mini,nums[j]);
                maximum=max(maximum,nums[j]);
                total+=maximum-mini;
            }
        }
        return total;
        
    }
};