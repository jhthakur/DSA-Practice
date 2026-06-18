class Solution {
public:
bool check(long long mid,vector<int>& time,int totalTrips){
    long long trips=0;
    for(int i=0;i<time.size();i++){
        trips+=mid/(long long)time[i];
    }if(trips<totalTrips)return false;
    else return true;
}
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long ans=-1;
        int maxx=-1;
        long long lo=1;
        for(int i=0;i<time.size();i++){
            maxx=max(maxx,time[i]);
        }
        long long hi=(long long)maxx*(long long)totalTrips;
        while(lo<=hi){
            long long mid=lo+(hi-lo)/2;
            if(check(mid,time,totalTrips)){
                ans=mid;
                hi=mid-1;
            }else lo=mid+1;
        }return ans;
    }
};