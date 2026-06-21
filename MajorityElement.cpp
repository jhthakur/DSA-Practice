#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n-1;i++){
        int j=i;
        while(j>0&&arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        j--;}}
        cout<<arr[n/2];
	return 0;
}