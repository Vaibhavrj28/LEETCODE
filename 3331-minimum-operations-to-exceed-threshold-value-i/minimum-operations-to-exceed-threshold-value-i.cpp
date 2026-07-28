class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s=nums.size();
        sort(nums.begin(),nums.end());
        int j;
        for(int i=0;i<s;i++){
            if(nums[i]>=k){
                j=i-1;
                break;
            }
        }
        return j+1;
    }
};