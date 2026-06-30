class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n){
            int correctidx=nums[i]-1;
            if(nums[correctidx]!=nums[i])swap(nums[correctidx],nums[i]);
            else i++;
        }
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                v.push_back(nums[i]);
            }
        }
        return v;
    }
};