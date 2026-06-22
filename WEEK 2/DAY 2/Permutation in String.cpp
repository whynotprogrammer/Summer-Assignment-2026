class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int> s1cnt(26,0), s2cnt(26,0);
        int i=0;
        int j=0;
        int w=s1.size();
        for(auto i:s1){
            s1cnt[i-'a']++;
        }
        while(j<s2.size()){
            s2cnt[s2[j]-'a']++;
            if(j-i+1 > w){
                s2cnt[s2[i]-'a']--;
                i++;
            }
            if(s2cnt == s1cnt) return true;
            j++;
        }
        return false;
    }
};
