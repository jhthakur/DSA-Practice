class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr){
        int n=arr.size();
    int lo=0;
    int hi=n-1;
    if(n==1)return arr[0];
    if(n==2)return max(arr[0],arr[1]);
    while(lo<=hi){
int mid=lo+(hi-lo)/2;
if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1]){
  return mid;
  } else if(arr[mid]<arr[mid+1]){lo=mid+1;}
    else {hi=mid-1;}}
return hi;
}   
};