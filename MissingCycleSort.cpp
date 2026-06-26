#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]={0,1,3,5,4};
    int i=0;
    while(i<n){
        int countidx=arr[i];
        if(arr[i]==i||arr[i]==n)i++;
        else swap(arr[i],arr[countidx]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=i) cout<<i;
    }
}
