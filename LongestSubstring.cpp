class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>alpha(128,0);
        int i=0;
        int maxlen=0;
        for(int j=0;j<s.size();j++){
                while(alpha[(unsigned char)s[j]]){
                    alpha[(unsigned char)s[i]]=0;
                    i++;
                }
                alpha[(unsigned char)s[j]]=1;
                maxlen=max(maxlen,j-i+1);
        }
            return maxlen;
    }
};