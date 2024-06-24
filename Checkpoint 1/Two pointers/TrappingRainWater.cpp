#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>


using namespace std;


// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;


int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }
        int maxL=height[0],maxR=height[height.size()-1],L=0,R=height.size()-1;
        int ans=0;
        while(L<R){
            if(maxL<=maxR){
                L++;
                maxL=max(height[L],maxL);
                ans+= maxL-height[L];
            }
            else{
                R--;
                maxR=max(maxR,height[R]);
                ans+=maxR-height[R];
            }

        }
        return ans;
    }


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> numbers;

    trap(numbers);
} 