#include<bits/stdc++.h>
using namespace std;
int mod=1000000007;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    string x="";
    auto it= --mp.end();
    char p= (*it).first;
    for(int i=0;i< (it->second);i++){
        x=x+p;
    }
    cout << x;
}