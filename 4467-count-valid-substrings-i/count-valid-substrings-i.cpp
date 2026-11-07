class Solution {
public:
    long long countValidSubstrings(string s) {
        int n=s.size();
        int l=0;
        int r=0;
        long long  ans=0;
        for(int r=0;r<n;r++){
            if(r>=2&&s[r]=='c'&&s[r-1]=='b'&&s[r-2]=='a'){ 
            l=r-1;
            }
            ans=ans+(r-l+1);
        }
        return ans;
    }
};