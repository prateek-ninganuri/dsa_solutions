class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;
        int n=num.size();
        st.push(num[0]);
        int removable = k;

        for(int i=1;i<n;i++){
            while(!st.empty()&& removable>0 &&(st.top()-'0')>(num[i]-'0')){
                st.pop();
                removable--;
            }
            st.push(num[i]);
          
           


        }

        while(removable>0){
            st.pop();
            removable--;
        }
        if(st.empty()) return "0";
       
        string ans = "";


        while(!st.empty()){
          ans.push_back(st.top());
            st.pop();
        }
      
         while (!ans.empty() && ans.back() == '0') {
            ans.pop_back();
        }

        reverse(ans.begin(), ans.end());

        if (ans.empty()) return "0";

        return ans;
      
        
    }
};