#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        if(m==0 && n==0){
            cout<<"YES"<<endl;
        }
        else if(m==0 || m==0){
            cout<<"NO"<<endl;
        }
        else if((m+n)%3==0){
            if(ceil((1.0)*max(m,n)/min(m,n)) <= 2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}