class Solution {
    bool isVowel(char c){
  return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';}    
public:
    int maxVowels(string s, int k) {
       int count=0;
       for(int i=0;i<k;i++){count+=isVowel(s[i]);}
        int maxcount=count;
       if(maxcount==k)return k;
       for(int i=k;i<(int)s.size();i++){
        count+=isVowel(s[i])-isVowel(s[i-k]);
        maxcount=max(maxcount,count);
       }
    return maxcount;
    }
};