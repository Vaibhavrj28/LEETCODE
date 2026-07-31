class Solution {
public:
    int minimumPushes(string word) {
        int s=word.size();
        map<char,int> f;
        for(int i=0;i<s;i++){
            f[word[i]]++;
        }
        int l=f.size();
        int o=0;
        int sum=0;
        int m=1;
        vector<int> fr;
        for(auto it:f){
            fr.push_back(it.second);
        }
        sort(fr.begin(),fr.end(),greater<int>());
        for(int i=0;i<fr.size();i++){
            if((i)%8==0&&i>0){
                o=o+sum*m;
                m++;
                sum=0;
            }
            sum=sum+fr[i];
        }
        o+=sum*m;
        return o;
    }
};