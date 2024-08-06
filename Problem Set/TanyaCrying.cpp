#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,A,B,c=0;
    cin>>n>>k>>A>>B;
    if(k>1){
        while((((n/k))*A*(k-1))>B){
            c+=(n%k)*A+B;
            n/=k;
        }
    }
    c+=(n-1)*A;
    cout<<c;
}
