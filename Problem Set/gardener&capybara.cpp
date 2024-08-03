#include <bits/stdc++.h>
using namespace std;
int mod=1000000007;

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;cin>>t;
    while(t--){
    string s;
    cin >> s;
    int n = s.size();
    
    int pos = 0;
    for (int i = 1; i < n - 1; i++) {
        if (s[i] == 'a') {
            pos = i;
            break;
        }
    }
    
    if (pos) {
        cout << s.substr(0, pos) << " " << 'a' << " " << s.substr(pos + 1) << "\n";
    } else {
        cout << s[0] << " " << s.substr(1, n - 2) << " " << s[n - 1] << "\n";
    }
}
}