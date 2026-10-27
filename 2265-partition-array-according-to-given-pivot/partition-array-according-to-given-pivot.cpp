class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>a1;
        vector<int>a2;
        vector<int>a3;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot){
                a1.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                a2.push_back(nums[i]);
            }
            else{
                a3.push_back(nums[i]);
            }
        }
        a1.insert(a1.end(),a2.begin(),a2.end());
        a1.insert(a1.end(),a3.begin(),a3.end());
        return a1;
    }
};