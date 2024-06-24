#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,x;
    cin >> n >> x;
    long long int arr[n];
    for(long long i=0;i<n;i++){
        long long p;
        cin>>p;
        arr[i]=p;
    }
    sort(arr,arr+n);
    long long l=0,r=n-1;
    long long mins=INT_MAX;
    while(l<r){
        if(arr[l]+arr[r]==x){
            mins=0;
            break;
        }
        else{
            long long w= abs(arr[l]+arr[r]-x);
            mins = min(mins,w);
            if(arr[l]+arr[r]>x){
                r--;
            }
            if(arr[l]+arr[r]<x){
                l++;
            }
        }
    }
    cout << mins;
    return 0;
}