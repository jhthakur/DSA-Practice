#include <iostream>
using namespace std;
bool palindrome(string s,int i,int j){
    if(i>=j)return true;
if(s[i]!=s[j])return false;
return palindrome(s,i+1,j-1);
}
int main() {
    string s;
    cin>>s;
    cout<<palindrome(s,0,s.size()-1);
	return 0;
}