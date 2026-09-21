class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n=nums.size();
        vector<int>ans(2);
        ans[0]=-1;
        ans[1]=-1;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int m=abs(i-j);
                int p=abs(nums[i]-nums[j]);
                if(m>=indexDifference){
                    if(p>=valueDifference){
                        ans[0]=i;
                        ans[1]=j;
                    }
                }
            }
        }
        return ans;
    }
};