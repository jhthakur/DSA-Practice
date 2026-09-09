class Solution {
public:
    int characterReplacement(string s, int k) {
    int cnt[26]={0};
    int i=0;
    int maxf=0;
    int maxlen=0;
    for(int j=0;j<s.size();j++){
        cnt[s[j]-'A']++;
        maxf=max(maxf,cnt[s[j]-'A']);
        if(j-i+1-maxf>k){
            cnt[s[i]-'A']--;
            i++;
        }
        maxlen=max(maxlen,j-i+1);
    }        
    return maxlen;
    }
};