#include<iostream>
#include<vector>
using namespace std;
    void productExceptSelf(int nums[],int n) {
        vector<int> pref(n);
        pref[0]=1;
        for(int i=1;i<n;i++){
            pref[i]=nums[i-1]*pref[i-1];
        }   
        int suff=1;
        for(int j=n-1;j>=0;j--){
            pref[j]=pref[j]*suff;
            suff=suff*nums[j];
        }
        for(int i=0;i<n;i++){
            cout<<pref[i]<<" ";
        }       
    }
int main(){
    int n;
    cin>>n;
    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    productExceptSelf(nums,n);
}