class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<int>> m;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(i);
        }
        for(auto it: m){
            vector<string> inner;
            for(auto i: it.second){
                inner.push_back(strs[i]);
            }
            ans.push_back(inner);
            inner.clear();
        }
        return ans;
    }
};
