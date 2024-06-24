#include<iostream>
#include<stdlib.h>
#include<stack>
#include<algorithm>

using namespace std;

// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

class MinStack {
public:
    stack<int> p;
    stack<int> minStack;
    MinStack() {};
    void push(int val) {
        p.push(val);
        val = min(val, minStack.empty() ? val : minStack.top());
        minStack.push(val);
    }
    
    void pop() {
        p.pop();
        minStack.pop();
    }
    
    int top() {
        return p.top();
    }
    
    int getMin() {
        return minStack.top();
    }
    
};

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    MinStack();
} 