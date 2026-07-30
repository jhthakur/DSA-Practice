#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int decimal;
    cin>>decimal;
    vector<int> binary;
    while(decimal>0){
        binary.push_back((decimal%2));
        decimal/=2;
        reverse(binary.begin(),binary.end());
        cout<<binary;
    }
}