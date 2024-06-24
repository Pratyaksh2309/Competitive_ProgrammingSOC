#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;cin>> t;
    while(t--){
        long long n,d;
        cin >> n>> d;
        if(n>=d){
            cout <<"YES"<<endl;
            continue;
        }
        long long D,a=1,b=(1-n),c=(d-n);
        D= b*b - 4*a*c;
        if(D<0){
            cout<< "NO"<<endl;
            continue;
        }
        else{
            int x1= ( (-1)*b + sqrt(D) )/2;
            int x2= ( (-1)*b - sqrt(D) )/2;
            if(x1>=0){
                    cout<<"YES"<<endl;continue;
                }
            else if(x2>=0){
                cout<<"YES"<<endl;continue;
            }
            else{
                cout<<"NO"<<endl;continue;
            }
        }
    
    }
}