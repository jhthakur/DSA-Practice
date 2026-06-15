#include <iostream>
using namespace std;
void Kclosest(int arr[],int k,int x,int n){
    
int lo=0;
int hi=n-1;
while(lo<=hi){
    int mid=lo+(hi-lo)/2;
if(arr[mid]<=x)lo=mid+1;
else hi=mid-1;
}
int left=hi;
int right=hi+1;
for(int i=0;i<k;i++){
    if(left<0)cout<<arr[right++]<<" ";
    else if(right>=n)cout<<arr[left--]<<" ";
    else if(x-arr[left]<=arr[right]-x)cout<<arr[left--]<<" ";
    else cout<<arr[right++]<<" ";
}
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int x;
    cin>>x;
    kclosest(arr,k,x,n);
	return 0;
}