class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){sum+=nums[i];}
        int i=0;
        int j=k;
        double maxsum=0;
        if(sum>maxsum)maxsum=sum;
        while(j<nums.size()-1){
           
            sum+=nums[j]-nums[i];
            if(sum>maxsum)maxsum=sum;
              j++;
            i++;
        }
        return maxsum/double(k);
    }
};