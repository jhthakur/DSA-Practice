#include <iostream>
using namespace std;
int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans[n-k+1];
    bool found=false;
    for(int i=0;i<k;i++){
        if(arr[i]<0){ans[0]=arr[i];
        found=true;
        break;}
    }
    if(!found) ans[0]=0;
    int a=1;
    for(int i=1;i<n-k+1;i++){
        found=false;
        for(int j=i;j<i+k;j++){
            if(arr[j]<0){ans[a]=arr[j];
            found=true;
            break;}
        }
        if(!found)ans[a]=0;
        a++;
    }
    for(int i=0;i<n-k+1;i++){
        cout<<ans[i]<<" ";
    }
	return 0;
}