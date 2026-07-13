#include<iostream>
#include<string>
using namespace std;
int main(){
    string str="1011";
    int n=str.size();
    int ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=(str[i]-'0')*(1<<(n-i-1));
    }
    cout<<ans;

}