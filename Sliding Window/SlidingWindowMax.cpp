#include<iostream>
#include<algorithm>
#include<stdlib.h>
#include<vector>

using namespace std;


// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int l=0;
        vector<int> ans;
        for(int i=0;i<=nums.size()-k;i++){
            int r=l+k;
            auto first=nums.begin()+l;
            auto second=nums.begin()+r;
            vector<int> p(first,second);
            sort(p.begin(),p.end());
            ans.push_back(p[k-1]);
            l++;   
        }
        return ans;
    }

    // int n = nums.size();
    //     vector<int> output(n - k + 1);
    //     deque<int> q;
    //     int l = 0, r = 0;

    //     while (r < n) {
    //         while (!q.empty() && nums[q.back()] < nums[r]) {
    //             q.pop_back();
    //         }
    //         q.push_back(r);

    //         if (l > q.front()) {
    //             q.pop_front();
    //         }

    //         if (r + 1 >= k) {
    //             output[l] = nums[q.front()];
    //             l++;
    //         }
    //         r++;
    //     }

    //     return output;
    // }

    // Two solutions , first one works for smaller n only. It is not that much efficient .


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> nums;
    int k;

    maxSlidingWindow(nums,k);
} 