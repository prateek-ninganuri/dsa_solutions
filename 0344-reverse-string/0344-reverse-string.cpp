class Solution {
public:
void rec(int x,int y,vector<char>& s){
    if(x>=y){
        return;
    }
    swap(s[x],s[y]);

    rec(x+1,y-1,s);   

}
    void reverseString(vector<char>& s) {
        int n=s.size();
        return rec(0,n-1,s);
        
    }
};