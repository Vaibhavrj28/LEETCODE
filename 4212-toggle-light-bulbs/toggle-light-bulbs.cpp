class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans;
        map<int,int>f;
        for(int i=0;i<bulbs.size();i++){
            f[bulbs[i]]++;
        }
        for(auto it:f){
            if(it.second%2!=0){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};