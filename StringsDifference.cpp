class Solution {
public:
    char findTheDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n==0)return t[0];
        int x;
        int ans=0;
        for(int i=0;i<n;i++){
            x=int(s[i]);
            ans^=x;
        }
         for(int i=0;i<n+1;i++){
             x=int(t[i]);
            ans^=x;
        }
        return char(ans);
    }
};