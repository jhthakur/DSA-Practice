#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        while(low<=high){
            int med=low+(high-low)/2;
        if(nums[med]==target){
            if(med>0 && nums[med-1]==target)high=med-1;
            else return med;
        }
        else if(nums[med]>target){high=med-1;}
        else{low=med+1;}
        }
    return nums.size();
    }
int main() {
	int n;
    cin>>n;
      int x;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      
        cin>>x;
        nums[i]=x;
    }
    int target;
    cin>>target;
    cout<<search(nums,target);
	return 0;
}