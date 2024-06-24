#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>

using namespace std;

// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;

int maxProfit(vector<int>& prices) {
    int ans=0;
    if(prices.size()==0 || prices.size()==1) return 0;
    if(prices.size()==2 && prices[1]-prices[0]>=0){
        return prices[1]-prices[0];
    }
    if(prices.size()==2 && prices[1]-prices[0]<0){
        return 0;
    }
    for(int i=0;i<prices.size();i++){
        int buy=prices[i];
        int sell=0;
        for(int j=i+1;j<prices.size();j++){
            sell=max(sell,prices[j]);
        }
        if(sell>buy){
            ans=max(ans,sell-buy);
        }
    }
    return ans;
}
// Two solutions , first one works for smaller n only. It is not that much efficient .

//     int maxP = 0, l = 0, r = 0;
//         while (r < prices.size()){
//             if (prices[r] > prices[l])
//                 maxP = max(maxP, prices[r] - prices[l]);
//             else
//                 l = r;
//             ++r;
//         }
//         return maxP;
//     }
// };


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> numbers;

    maxProfit(numbers);
} 