#include <iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ans="";
    while(n>0){
        if(n%2==0){
            ans+='0';
        }
        else{
            ans+='1';
        }
        n=n/2;
    }
    cout<<ans;
    return 0;
}