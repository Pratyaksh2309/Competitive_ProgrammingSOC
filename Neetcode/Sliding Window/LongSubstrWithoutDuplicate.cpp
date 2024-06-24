#include<iostream>
#include<string>
#include<stdlib.h>
#include<unordered_set>


using namespace std;


// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;


int lengthOfLongestSubstring(string s) {
        unordered_set<char> charSet;
        int l = 0;
        int res = 0;

        for (int r = 0; r < s.size(); r++) {
            while (charSet.find(s[r]) != charSet.end()) {
                charSet.erase(s[l]);
                l++;
            }
            charSet.insert(s[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;

    lengthOfLongestSubstring(s);
} 