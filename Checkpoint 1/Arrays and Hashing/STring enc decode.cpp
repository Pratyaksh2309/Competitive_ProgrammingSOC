#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>
#include<algorithm>
#include<map>


using namespace std;


// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

string encode(vector<string>& strs) {
        string ans;
        for(auto i:strs){
            int o=i.size();
            ans+= to_string(o)+"#"+i;
        }
        cout<< ans;
        return ans;
    }

vector<string> decode(string s) {
    vector<string> p;

    int i=0;
    while(i<s.size()){
        int j=i;
        while(s[j]!='#'){
            j++;
        }
        int le = stoi(s.substr(i, j - i));
        string str = s.substr(j + 1, le);
        p.push_back(str);
        i = j + 1 + le;
    }
    
    return p;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> strs;  //cin by user depeneding on the question

    string q= encode(strs);
    decode(q);
}