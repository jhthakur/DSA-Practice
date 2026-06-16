class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int lo=0;
        int hi=n-1;
        int pivot=-1;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(mid>0&&mid<n-1&&nums[mid]<nums[mid+1]&&nums[mid]<nums[mid-1]){
                pivot = mid;
                break; }
            else if(mid>0&&mid<n-1&&nums[mid]>nums[mid+1]&&nums[mid]>nums[mid-1]){
                pivot= mid+1;break;}
            else if(nums[mid]>nums[hi])lo=mid+1;
            else hi=mid-1;}
            if(pivot==-1)pivot=0;
            if(target>=nums[0]&&target<=nums[pivot-1]){
                lo=0;hi=pivot-1;
                while(lo<=hi){
                   int mid=lo+(hi-lo)/2;
                    if(target==nums[mid])return mid;
                    else if(target>nums[mid])lo=mid+1;
                    else hi=mid-1; }return -1;}
            else {lo=pivot;hi=n-1;
                while(lo<=hi){
                   int mid=lo+(hi-lo)/2;
                    if(target==nums[mid])return mid;
                    else if(target>nums[mid])lo=mid+1;
                    else hi=mid-1;
            }return -1;}}};