class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i+1<n;i++){
            int m=arr[i+1]-arr[i];
            ans.push_back(m);
        }
        int a=0;
        for(int i=0;i+1<ans.size();i++){
            if(ans[i+1]!=ans[i]){
                a=1;
                break;
            }
        }
        if(a) return 0;
        else return 1;
    }
};