class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int j = 0;
        int read = 0;
        while(j < chars.size()){
            if(chars[i] != chars[j]){
                chars[read] = chars[i];
                read++;
                int num = j - i;
                i = j;
                if(num>1){
                    string s = to_string(num);
                    for(char c:s){
                        chars[read]=c;
                        read++;
                    }
                }
            }
            j++;
        }
        chars[read] = chars[i];
        read++;
        int num = j - i;
        if(num>1){
            string s = to_string(num);
            for(char c:s){
                chars[read]=c;
                read++;
            }
        }
        return read;
    }
};
