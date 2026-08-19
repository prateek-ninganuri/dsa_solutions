class Solution {
public:
vector<vector<int>> ans;
void solve(vector<int>curr,vector<int>& nums,int index){

 if(index == nums.size()){
   ans.push_back(curr);
   return;
 }

  curr.push_back(nums[index]);
   solve(curr,nums,index+1);
   curr.pop_back();

   int next=index+1;
   while(next<nums.size() && nums[next]==nums[index]){
    next++;
   }
   solve(curr,nums,next);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        vector<int> curr;
         solve(curr,nums,0);

        return ans;
        
    }
};