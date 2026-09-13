class Solution {
public:
    int reverse(int x) {
        int n=1;
        if(x<0)n=-1;
        int temp;
        string s=to_string(x);
        for(int i=0;i<s.size()/2;i++){
            temp=s[s.size()-1-i];
            s[s.size()-1-i]=s[i];
            s[i]=temp;
        }
       long long x2=stoll(s);
        if(x2<INT_MIN||x2>INT_MAX)return 0;
        return n*int(x2);
    }
};