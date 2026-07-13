class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        if(k>n)return 0;
        int i=0;
        int j=k;
        int p=i;
        int sum=0;
        int avg=-1;
        int count=0;
        while(j<=n){
            while(p<j){
                sum+=arr[p];
                p++;
            }
            avg=sum/k;
            if(avg>=threshold)count++;
            sum-=arr[i];
             p=j;
            i++;
            j++;
        }
    return count;
    }
};