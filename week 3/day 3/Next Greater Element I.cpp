class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack <int> st;
        unordered_map <int,int> m;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && st.top()<nums2[i]){
                m[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(m.count(nums1[i])){
                nums1[i] = m[nums1[i]];
            }
            else{
                nums1[i] = -1;
            }
        }
        return nums1;
    }
};
