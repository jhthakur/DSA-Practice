#include <iostream>
using namespace std;
int symbol(int n,int k){
if(n==1&&k==1)return 0;
if(k%2==0) {int ans=symbol(n-1,k/2);
if(ans==0)return 1;
else return 0;}
if(k%2!=0) return symbol(n-1,(k/2)+1);

}
int main() {
	int n,k;
    cin>>n>>k;
    cout<<symbol(n,k);
	return 0;
}