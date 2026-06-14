#include <iostream>
#include<algorithm>
using namespace std;
int smallestMissing(int arr[],int n){
int low=0;
int high=n-1;
while(low<=high){
int mid=low+(high-low)/2;
if(arr[mid]==mid)low=mid+1;
else high = mid-1;
}return low;
}
int main() {
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<smallestMissing(arr,n);
	return 0;
}