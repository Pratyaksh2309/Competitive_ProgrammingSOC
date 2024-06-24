#include<iostream>
#include<vector>
#include<stdlib.h>
#include<string>

using namespace std;

// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(n, 0, 0, "", res);
        return res;
    }

void backtrack(int n, int openN, int closedN, string current, vector<string>& res) {
    if (openN == closedN && openN == n) {
        res.push_back(current);
        return;
    }

    if (openN < n) {
        backtrack(n, openN + 1, closedN, current + "(", res);
    }
    if (closedN < openN) {
        backtrack(n, openN, closedN + 1, current + ")", res);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;

    generateParenthesis(n);
} 