#include<iostream>
using namespace std;
void skipchar(int arr[5],int i,int temp[5]){
if(i==5){
    for(int i=0;i<5;i++){
        cout<<temp[i]<<" ";
    }
    return;
}
if(arr[i]==2){temp[i]=0;skipchar(arr,i+1,temp);}
else{
    temp[i]=arr[i];
   skipchar(arr,i+1,temp); }
}
int main(){
    int arr[5];
    int temp[5];
    for(int i=0;i<5;i++){ 
        cin>>arr[i];
    }
 skipchar(arr,0,temp);
}