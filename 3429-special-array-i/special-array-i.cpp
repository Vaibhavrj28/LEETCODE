class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int s=nums.size();
        if(s==1) return true;
        int a=0;
        for(int i=0;i+1<s;i++){
            int x=nums[i];
            int y=nums[i+1];
            if(((x%2==0)&&(y%2==0))||((x%2!=0)&&(y%2!=0))) a=1;
            if(a==1) return false;
        }
        return true;
    }
};