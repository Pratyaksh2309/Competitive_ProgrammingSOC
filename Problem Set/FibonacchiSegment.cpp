#include<bits/stdc++.h>
using namespace std;

int main(){
    int len;cin >>len;
    int arr[len];
    for(int i=0;i<len;i++){
        int p;
        cin >>p;
        arr[i]=p;
    }
    if(len==1) cout<< 1;
    else{
    int l=2,p=2;
    for(int i=2;i<len;i++){
        if(arr[i-2]+arr[i-1]==arr[i]){
            l++;
        }
        else{
            l=2;
        }
        p=max(l,p);
    }
    cout << p;
    }
}