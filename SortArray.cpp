class Solution {
public:
    void merge(vector<int>&a,vector<int>&b,vector<int>&nums){
        int i=0;
        int j=0;
        int k=0;
        while(i<a.size()&&j<b.size()){
            if(a[i]<b[j])nums[k++]=a[i++];
            else nums[k++]=b[j++];
            if(i==a.size())while(j<b.size())nums[k++]=b[j++];
            if(j==b.size())while(i<a.size())nums[k++]=a[i++];
        }
    }
    void mergesort(vector<int>&nums){
        int n=nums.size();
        if(n==1)return;
        int n1=n/2;
        int n2=n-n1;
        vector<int>a(n1),b(n2);
        for(int i=0;i<n1;i++){
            a[i]=nums[i];
        }
         for(int i=0;i<n2;i++){
            b[i]=nums[i+n1];
        }
        mergesort(a);
        mergesort(b);
        merge(a,b,nums);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums);
        return nums;
    }
};