class Solution {
public:
int count=0;
    void merge(vector<int>& nums,int l,int mid,int r){
        int j=mid+1;
        for(int i=l;i<=mid;i++){
            while(j<=r && nums[i]>2LL*nums[j])j++;
            count+=(j-(mid+1));
        }
        vector<int> temp;
        int left=l,right=mid+1;
        while(left<=mid && right<=r){
            if(nums[left]<=nums[right])temp.push_back(nums[left++]);
            else temp.push_back(nums[right++]);
        }
        while(left<=mid) temp.push_back(nums[left++]);
        while(right<=r)temp.push_back(nums[right++]);
        for(int i=l;i<=r;i++){
            nums[i]=temp[i-l];
        }
        }
    void mergeSort(vector<int>&nums,int l,int r){
        if(l>=r)return;
        int mid=l+(r-l)/2;
        mergeSort(nums,l,mid);
        mergeSort(nums,mid+1,r);
        merge(nums,l,mid,r);
    }
    int reversePairs(vector<int>& nums) {
        count=0;
        mergeSort(nums,0,nums.size()-1);
        return count;
    }
};