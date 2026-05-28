#include<iostream>
using namespace std ;
void sum(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
     if(n==1)return;
    int temp[n-1];
    for(int i=0;i<n-1;i++){
        temp[i] = arr[i]+arr[i+1];
    }
   sum(temp,n-1);
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sum(arr,n);
}