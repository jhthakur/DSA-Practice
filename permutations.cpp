#include <iostream>
#include<vector>
using namespace std;
void permutations(string str,string ans){
    if(str==""){
        cout<<ans<<" ";
    }
for(int j=0;j<str.size();j++){
    char ch=str[j];
    string left=str.substr(0,j);
    string right=str.substr(j+1,str.size()-1);
    permutations(left+right,ans+ch);
}

}
int main() {
    string str;
    cin>>str;
    vector<string> ans;
    permutations(str,"");
	return 0;
}