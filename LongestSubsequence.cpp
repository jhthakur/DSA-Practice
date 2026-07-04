class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n=nums.size();
    int m=queries.size();
    vector<int> ans(m);
    sort(nums.begin(),nums.end());
    int pref[n];
    pref[0]=nums[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+nums[i];
    }
    for(int i=0;i<m;i++){
        int maxlen=0;
        int lo=0;
        int hi=n-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(pref[mid]>queries[i])hi=mid-1;
            else{ maxlen=mid+1;
            lo=mid+1;}
            }
    ans[i]=maxlen;}
    return ans;}
};