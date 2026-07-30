class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s=nums.size();
        int c=0;
        int si=0;
        for(int i=0;i<s;i++){
            if(nums[i]%2==0){
                if(nums[i]%3==0){
                    c++;
                    si+=nums[i];
                }
            } 
        }
        if(c==0) return 0;
        else{
            return si/c;
        }
    }
};