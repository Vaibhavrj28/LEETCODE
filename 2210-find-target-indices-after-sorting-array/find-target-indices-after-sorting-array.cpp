class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>a;
        int s=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<s;i++){
            if(nums[i]==target) a.push_back(i);
        }
        return a;
    }
};