class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> arr;
        unordered_map<char,int> m1,m2;
        for(auto i:p) m1[i]++;
        int i=0;
        int j=0;
        while(j<s.size()){
            m2[s[j]]++;
            if(j-i+1 > p.size()){
                m2[s[i]]--;
                if(m2[s[i]] == 0) m2.erase(s[i]);
                i++;
            }
            if(j-i+1 == p.size()){
               if(m1 == m2) arr.push_back(i);   
            }
            j++;
        }
        return arr;
    }
};
