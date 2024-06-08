#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<unordered_map>
using namespace std;


// const int MOD = 998244353;
const int MOD = 1000000007;
const int inf = 1e16;
const int maxn = 100005;
const int _0 = 0;

//     bool isAnagram(string s, string t) {
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
//         if(s==t){
//             return true;
//         }
//         return false;
//     }
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> p;
//         map<string,int> qe;

//         for(int i=0;i<strs.size();i++){
//             vector<string> q;
//             if(qe.count(strs[i])<1) {q.push_back(strs[i]);}
//             else{continue;}
//             for(int j=i+1;j<strs.size();j++){
//                 if(isAnagram(strs[i],strs[j])){
//                     q.push_back(strs[j]);
//                     qe[strs[j]]++;
//                 }
//             }
//             p.push_back(q);
//         }
 
//     return p;
//     }
// };

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(int i=0;i<strs.size();i++)
        {
            string so= strs[i];
            sort(so.begin(), so.end());
            mp[so].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto it: mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> p;  //cin by user depeneding on the question

    groupAnagrams(p);
}