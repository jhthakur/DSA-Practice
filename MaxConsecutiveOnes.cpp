class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        int length=0;
        int maxlength=INT_MIN;
        while(j<n){
            if(nums[j]==0){
            if(count<k){
                count++;
                j++;
            }  
            else{
                length=j-i;
                maxlength=max(maxlength,length);
                while(nums[i]==1)i++;   
                i++;
                j++;   
              }
            }
            else{j++;
            }
    }
        return maxlength;
    }
};