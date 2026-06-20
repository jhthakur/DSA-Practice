#include <iostream>
using namespace std;

int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }flag=false;
    }if(flag==true)break;
        }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
	return 0;
}
