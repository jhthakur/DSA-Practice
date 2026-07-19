#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n;
        n=n|n>>1;
        n=n|n>>2;
        n=n|n>>4;
        n=n|n>>8;
    a=a^n;
    cout<<a;
    return 0;
}