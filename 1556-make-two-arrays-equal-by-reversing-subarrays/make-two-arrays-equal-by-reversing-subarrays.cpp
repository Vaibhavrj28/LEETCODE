class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int t=target.size();
        int a=arr.size();
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        bool ans=true;
        int i=0;
        while(i!=t){
            if(target[i]!=arr[i]){
                ans= false;
                break;
            }
            i++;
        }
        return ans;
    }
};