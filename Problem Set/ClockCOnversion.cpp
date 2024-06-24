#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        char s[6];
        cin>>s;
        int a= (int(s[0]-48))*10 + int(s[1]-48);
        int b= (int(s[3]-48))*10 + int(s[4]-48);
        if(a==0){
            if(b>=0 && b<=9){
             cout<<"12:0"<<b<<" AM"<<endl;
            }
            else{
                cout<<"12:"<<b<<" AM"<<endl;
            }
        }
        else if(a>0 && a<12){
            if(a<=9){
                if(b>=0 && b<=9){
                    cout<<"0"<<a<<":0"<<b<<" AM"<<endl;
                }
                else{
                    cout<<"0"<<a<<":"<<b<<" AM"<<endl;
                }
            }
            else{
                if(b>=0 && b<=9){
                    cout<<a<<":0"<<b<<" AM"<<endl;
                }
                else{
                    cout<<a<<":"<<b<<" AM"<<endl;
                }
            }
         }
        else if(a==12){
            if(b>=0 && b<=9){
             cout<<"12:0"<<b<<" PM"<<endl;
            }
            else{
                cout<<"12:"<<b<<" PM"<<endl;
            }
        }
        else{
            if(a-12 <=9){
                if(b>=0 && b<=9){
                    cout<<"0"<<a-12<<":0"<<b<<" PM"<<endl;
                }
                else{
                    cout<<"0"<<a-12<<":"<<b<<" PM"<<endl;
                }
            }
            else{
                if(b>=0 && b<=9){
                    cout<<a-12<<":0"<<b<<" PM"<<endl;
                }
                else{
                    cout<<a-12<<":"<<b<<" PM"<<endl;
                }
            }
        }
    }
    return 0;
}