class Solution {
public:
vector<vector<int>> ans;
vector<int> curr;
void solve(vector<int>& candidates, int target,int index){
    if(target==0){
        ans.push_back(curr);
        return;
    }
    if(target<0){
        return;
    }
    if(index==candidates.size()){
        return ;
    }
    curr.push_back(candidates[index]);
    solve(candidates,target-candidates[index],index);

    curr.pop_back();
     solve(candidates,target,index+1);

};




    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
      solve(candidates,target,0);
      return ans;

    };
    
};