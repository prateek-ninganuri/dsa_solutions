class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(high<=nums.size()){
            if(nums[low]+nums[high]==target){
                return{low,high};
            }
            if(nums[low]+nums[high]>target){
                high--;
            }
            else{
                low++;
            }
        }
        return {};
        
    }
};