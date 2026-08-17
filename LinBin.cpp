class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;int hi=n-1;int mid=0;
        int first=-1;int last=-1;
        while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target){first=mid;hi=mid-1;}
            else if(nums[mid]>target){hi=mid-1;}
            else{lo=mid+1;}
            }
            lo=0;hi=n-1;
             while(lo<=hi){
            mid=lo+(hi-lo)/2;
            if(nums[mid]==target){last=mid;lo=mid+1;}
            else if(nums[mid]>target){hi=mid-1;}
            else{lo=mid+1;}
            }
            vector<int>ans(2);
            ans[0]=first;ans[1]=last;
            return ans;
    }
};