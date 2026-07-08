class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        int length=0;
        int k=1;
        int maxlength=INT_MIN;
        while(j<n){
            if(nums[j]==0){
            if(count<k){
                count++;
            }  
            else{
                while(nums[i]==1)i++;   
                i++;   
              }
            }
            j++;
            length=j-i;
            maxlength=max(maxlength,length);
    }
        return maxlength-1;
    }
};