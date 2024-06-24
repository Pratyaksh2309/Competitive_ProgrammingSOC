#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string op;
        cin>>op;
        stack<char> mp;
        mp.push(op[0]);
        for(int i=1;i<op.size();i++){
            if(op[0]==')'){
                break;
            }
            char c=op[i];
            if(c!='('){
                if(!mp.empty()){
                mp.pop();
                }
                else{
                    mp.push(c);
                }
            }
            else{
                mp.push(op[i]);
            }
        }
        if(mp.empty()){
            cout<<"YES"<<endl;}
        else{
            cout<< "NO"<<endl;
        }
        
    }
}