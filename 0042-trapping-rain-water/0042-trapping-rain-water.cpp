class Solution {
public:
    int trap(vector<int>& height) {
        int total=0;
        int n=height.size();
        vector<int> sufixmax(n);
         vector<int> prefixmax(n);

         prefixmax[0]=height[0];
         sufixmax[n-1]=height[n-1];

         for(int i=1;i<n;i++){
            prefixmax[i]=max(prefixmax[i-1],height[i]);

         }

         for(int i=n-2;i>=0;i--){
            sufixmax[i]=max(sufixmax[i+1],height[i]);

         }

         for(int i=0;i<n;i++){
            if(height[i]<sufixmax[i] && height[i]<prefixmax[i]){
            total=total+(min(prefixmax[i],sufixmax[i])-height[i]);
            }
         }

         return total;

        
    }
};