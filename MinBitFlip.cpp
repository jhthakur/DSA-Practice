#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
        n=n^m;
        int zeros=0;
    while(n>0){
        if((n&1)==0){
        zeros++;}
        n>>=1;
    }
cout<<zeros;
    return 0;
}
