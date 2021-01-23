#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int ans =1;
    vector<int> mp(n+1,0);
    for(int i=0; i<n;i++){
       if(a[i]!=n && mp[a[i]+1]){
           ans++;
       }
       mp[a[i]]=1;
    }
    cout<<ans;
    return 0;
}
