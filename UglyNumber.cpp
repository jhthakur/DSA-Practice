#include <iostream>
using namespace std;
int main()
{int n;
cin>>n;
bool flag=false;
if(n%2==0||n%3==0||n%5==0){
flag=true;
}
for(int i=7;i<=n/2;i++){
    if(n%i==0)flag=false;
}
if(flag==false)cout<<"false";
else cout<<"true";
    return 0;
}