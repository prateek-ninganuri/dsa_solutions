class Solution {
public:
vector<vector<int>> ans;
vector<int> curr;




  void  solve(int index,int target,vector<int>& candidates){


   
    if(target==0){
        ans.push_back(curr);
        return ;
    }
    if(target<0){
    
        return ;
    }
      if(index == candidates.size())
    return;

    curr.push_back(candidates[index]);

    solve(index, target - candidates[index], candidates); 

    curr.pop_back();     

    solve(index+1,target, candidates);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        solve(0,target, candidates);
        return ans;
        
    }
};