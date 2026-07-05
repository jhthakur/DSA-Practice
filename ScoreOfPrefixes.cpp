class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>score;
        long long sum=0;
        long long mx=INT_MIN;
            for(int j=0;j<n;j++){
                mx=max((long long)nums[j],mx);
                long long ans=nums[j]+mx;
                sum+=ans;
            score.push_back(sum);
           }
    return score;
    }
};