class Solution {
public:
 vector<vector<int>> ans;
 vector<int> curr;

 void solve(int k,int n,int sum,int i,vector<int> curr){
    if( sum == n && curr.size() == k){
        ans.push_back(curr);
        return;
    }
  
    
    if(curr.size() == k){
        return;
    }
    if(i > 9){
        return;
    }
  

        curr.push_back(i);
       solve(k,n,sum+i,i+1,curr);
       curr.pop_back();
        solve(k,n,sum,i+1,curr);
 
 }

    vector<vector<int>> combinationSum3(int k, int n) {
        solve(k,n,0,1,curr);
        return ans;
        
    }
};