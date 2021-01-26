#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1];
    for(int i=1;i<=n;i++) {
        cin>>a[i];
    }
    int ans =1,x,y;
    vector<int> mp(n+1,0);
    for(int i=1; i<=n;i++){
        if(a[i]!=n && mp[a[i]+1]){
            ans++;
        }
        mp[a[i]]=i;
    }
    while (m--){
        cin>>x>>y;
        if (x>y)
            swap(x,y);
        if (a[x] == a[y]+1){
            ans--;
        }
        else if(a[x]+1 == a[y]){
            ans++;
        }
        if (mp[a[x]+1] && mp[a[x]+1] > mp[a[x]]){
            if (y > mp[a[x]+1])
                ans++;
        }
        if (mp[a[x]-1] && mp[a[x]-1] > mp[a[x]]){
            if ( y> mp[a[x]-1])
                ans--;
        }

        if (mp[a[y]+1] && mp[a[y]+1] < mp[a[y]]){
            if (x < mp[a[y]+1])
                ans--;
        }

        if (mp[a[y]-1] && mp[a[y]-1] < mp[a[y]]){
            if(x < mp[a[y]-1])
                ans++;
        }
        swap(a[x],a[y]);
        mp[a[x]] = x;
        mp[a[y]] = y;
        cout<<ans<<endl;
    }
    return 0;
}

