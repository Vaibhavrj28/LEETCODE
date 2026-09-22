class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int m1=*max_element(nums2.begin(),nums2.end());
        int m2=*max_element(nums1.begin(),nums1.end());
        return m1-m2 ;
    }
};