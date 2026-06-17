class Solution {
public:
    bool check(int mid,vector<int>& piles, int h){
        long long count=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=mid){
                count++;
            }
            else if(piles[i]%mid==0){
                count+=(long long)piles[i]/mid;
            }
            else if(piles[i]%mid!=0){
                count+=(piles[i]/mid)+1;
            }
        }
        if(count>h)return false;
        else return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans=-1;
        int n=piles.size();
        int maxx=-1;
        int lo=1;
        int hi=-1;
        for(int i=0;i<n;i++){
            maxx=max(piles[i],maxx);
        }
        hi=maxx;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,piles,h)){
                ans=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return ans;
    }
};