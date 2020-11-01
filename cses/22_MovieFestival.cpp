#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x,y;
    cin>>n;
    vector< pair<ll,ll> > movie;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        movie.push_back({x,y});
    }
    sort(movie.begin(),movie.end(),[](pair<ll,ll> &a,pair<ll,ll> &b){
        return (a.second < b.second) ;
    });

    int ans=1;
    ll last = movie[0].second;
    for(int i=1;i<n;i++){
        if(last<=movie[i].first){
            ans++;
            last = movie[i].second;
        }
    }
    cout<<ans;
    return 0;
}