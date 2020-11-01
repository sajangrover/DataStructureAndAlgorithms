#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x;
    cin>>n>>x;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    map<ll,int> mp;
    int l=-1,r=-1;
    for(int i=1;i<=n;i++){
        if(mp[x-a[i]]){
            l=mp[x-a[i]];
            r=i;
            break;
        }
        mp[a[i]]=i;
    }

    if(l==-1){
        cout<<"IMPOSSIBLE";
    }
    else
    {
        cout<<l<<" "<<r;
    }
    
    return 0;
}