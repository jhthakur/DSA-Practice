#include <iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        int maxel=INT_MIN;
        int count=0;
        int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxel){
            maxel=arr[i];
            count=1;
        }
        else if(arr[i]==maxel){
            count++;
        }
        ans=max(ans,count);
    }
    cout<<ans;    
}