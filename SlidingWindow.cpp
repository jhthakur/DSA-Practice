#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int ans;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int i=1;
    int j=k;
    int maxsum=sum;
    while(j<n){
        sum+=arr[j]-arr[i-1];
        if(maxsum<sum){
            maxsum=sum;
        }
        i++;
        j++;
    }
    cout<<maxsum;
}