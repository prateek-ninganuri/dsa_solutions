class Solution {
public:
    vector<string> ans;

   void solve(int x,int y,string curr,int n){
        if(curr.size()==2*n){
            ans.push_back(curr);
            return;
        }
        

         if(x<n){
            curr.push_back('(');
              solve(x+1,y,curr,n);
               curr.pop_back();
        }

       

         if(y<x){
             curr.push_back(')');
           solve(x,y+1,curr,n);
            curr.pop_back();


        }
    }


    


    vector<string> generateParenthesis(int n) {
        solve(0,0,"",n);
        return ans;

    }
     
};