#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;


// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;



vector<int> twoSum(vector<int>& numbers, int target) {
        auto l=0;
        auto r=numbers.size()-1;
        vector<int> ans;
        while(true){
            int p=numbers[r]+numbers[l];
            if(target>p){
                l++;
            }
            else if(target==p){
                ans.push_back(l+1);ans.push_back(r+1);
                return ans;
            }
            else{
               r--;
            }
        }
    }

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> numbers;
    int target;

    twoSum(numbers,target);
} 