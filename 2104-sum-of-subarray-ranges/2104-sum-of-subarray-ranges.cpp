class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        long long totalmini=0;
          long long totalMax = 0;

        vector<int> pse(n);
         vector<int> nse(n);
           vector<int> pge(n), nge(n);
        
         stack<int> st;

         for(int i=0;i<n;i++){
            while(!st.empty()&&nums[st.top()]>nums[i]){
                st.pop();
            }
            if(st.empty()){
                pse[i]=-1;
            }
            else{
                pse[i]=st.top();
            }
            st.push(i);
         }
           
         while (!st.empty()) st.pop();

         for(int i=n-1;i>=0;i--){
            while(!st.empty()&&nums[st.top()]>=nums[i]){
                st.pop();
            }
            if(st.empty()){
                nse[i]=n;
            }
            else{
                nse[i]=st.top();
            }
            st.push(i);
         }

         
         for(int i=0;i<n;i++){
            int left = i - pse[i];
             int  right = nse[i] - i;
            totalmini += 1LL * nums[i] * left * right;

         }



        while (!st.empty()) st.pop();
        for (int i = 0; i < n; i++) {
            while (!st.empty() && nums[st.top()] < nums[i])
                st.pop();

            if (st.empty())
                pge[i] = -1;
            else
                pge[i] = st.top();

            st.push(i);
        }

        while (!st.empty()) st.pop();

          for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && nums[st.top()] <= nums[i])
                st.pop();

            if (st.empty())
                nge[i] = n;
            else
                nge[i] = st.top();

            st.push(i);
        }

        for (int i = 0; i < n; i++) {
            long long left = i - pge[i];
            long long right = nge[i] - i;
            totalMax += 1LL * nums[i] * left * right;
        }

        return totalMax - totalmini;
        
    }
};