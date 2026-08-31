class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0)return "";
        if(n==1)return s;
        int maxlen=1;
        int final_start=0;
        int start,end,length;
    for(int i=0;i<n;i++){
        start=i;end=i;length=1;
        while(start>0&&end<n&&s[start-1]==s[end+1]){
            start--;end++;length+=2;}
            if(length>maxlen){maxlen=length;final_start=start;}
        start=i;end=i+1;length=0;
        while(start>=0&&end<n&&s[start]==s[end]){
            start--;end++;length+=2;}
            if(length>maxlen){maxlen=length;final_start=start+1;}}  
            return s.substr(final_start,maxlen); 
    }
};