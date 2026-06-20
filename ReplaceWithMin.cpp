#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(n);
    int a=0;
    for(int j=0;j<n;j++){
        int minn=INT_MAX;
    int mindx=-1;
    for(int i=0;i<n;i++){
       if(arr[i]<minn){minn=arr[i];
       mindx=i;}}
       arr[mindx]=INT_MAX;
       v[mindx]=a;
       a++;}
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }  
	return 0;
}