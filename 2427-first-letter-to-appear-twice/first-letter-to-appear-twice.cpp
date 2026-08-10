class Solution {
public:
    char repeatedCharacter(string s) {
        map<int,int>freq;
        char ans;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
            if(freq[s[i]]==2){
                 ans=s[i];
                break;
            }
        }
        return ans;
    }
};