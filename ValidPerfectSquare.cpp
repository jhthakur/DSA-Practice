class Solution {
public:
    bool isPerfectSquare(int num) {
      long long lo=0;
      long long hi=num;
      long long ans;
      while(lo<=hi){
        long long mid=lo+(hi-lo)/2;
        if(mid*mid<=num){
            ans=mid;
            lo=mid+1;
      }  
      else {hi=mid-1;}
      }
      if(ans*ans==num)return true;
      else return false;
    }
};