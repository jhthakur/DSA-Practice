class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int current=nums[0];
        int maxsum=nums[0];
        for(int i=1;i<n;i++){
           current=max(nums[i],current+nums[i]);
           maxsum=max(maxsum,current);
        }
        return maxsum;
    }
};