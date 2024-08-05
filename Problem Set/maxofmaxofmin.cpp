#include<bits/stdc++.h>
using namespace std;

int const INF = 1e9 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n>> k;
    // vector<int> mp;
    // for(int i=0;i<n;i++){
    //     int a;
    //     cin>> a;
    //     mp.push_back(a);
    // }
    // sort(begin(mp),end(mp));
    // vector<int> ans;
    // int i=n-1;
    // while(t!=0){
    //     vector<int> a;
    //     if(t==1){
    //         a.insert(end(a), begin(mp), end(mp));
    //     }
    //     else{
    //         a.push_back(mp[n-1]);
    //         mp.pop_back();
    //         i--;
    //     }
    //     t--;
    //     int min = *min_element(a.begin(), a.end()); 
    //     ans.push_back(min);
    // }
    // int x=0;
    // x = *max_element(ans.begin(),ans.end());
    // cout << x;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (k == 1) {
        cout << *min_element(a.begin(), a.end()) << '\n';
    } else if (k == 2) {
        multiset<int> s, t;
        for (int i = 0; i < n; ++i)
            t.insert(a[i]);
        int ans = -INF;
        for (int i = 0; i < n - 1; ++i) {
            s.insert(a[i]);
            t.erase(t.find(a[i]));
            ans = max(ans, max(*s.begin(), *t.begin()));
        }
        cout << ans << '\n';
    } else {
        cout << *max_element(a.begin(), a.end()) << '\n';
    }
}


