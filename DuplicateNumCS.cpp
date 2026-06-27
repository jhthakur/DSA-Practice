class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    int n=nums.size();
    int i=0;
    while(i<n){
        int countidx=nums[i];
        if(nums[countidx]==nums[i])return nums[i];
        else swap(nums[i],nums[countidx]);
    }
    return 1;
    }
};