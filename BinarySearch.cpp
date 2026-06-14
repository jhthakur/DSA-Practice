class Solution {
public:
    int search(vector<int>& nums, int target) {
        bool flag=false;
        int low=0;
        int high=nums.size()-1;
        
        while(low<=high){
            int med=low+(high-low)/2;
        if(nums[med]==target){return med;}
        else if(nums[med]>target){high=med-1;}
        else{low=med+1;}
        }
    return -1;
    }
};