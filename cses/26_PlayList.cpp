#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<long long ,int> mp;
    int ans=0,cur=0; 
    for(int i=0;i<n;i++){
        if(mp[a[i]]){
            if(i-mp[a[i]]<cur)
                cur = i-mp[a[i]];
        }
        mp[a[i]]=i+1;
        cur++;
        ans = max(ans,cur);
    }
    cout<<endl;
    cout<<ans;
    return 0;
}