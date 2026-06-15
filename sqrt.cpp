class Solution {
public:
    int mySqrt(int x) {
       int lo=0;
       int hi=x;
       while(lo<=hi){
        int mid =lo+(hi-lo)/2;
        long long m=(long long)mid;
        if(m*m==x)return m;
        else if(m*m<x)lo=m+1;
        else hi = m-1;
       }return hi;

    }
};