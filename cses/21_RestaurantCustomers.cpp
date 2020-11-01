#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,y;
    cin>>n;
    vector<long long> arl,lv;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        arl.push_back(x);
        lv.push_back(y);
    }
    sort(arl.begin(),arl.end());
    sort(lv.begin(),lv.end());
    int i=0,j=0;
    int cur=0,ans=0;
    while(i<=n-1 && j<=n-1){
        if(arl[i]<lv[j]){
            cur++;
            i++;
        }
        else{
            cur--;
            j++;
        }
        ans = max(cur,ans);
    }
    cout<<ans;
    return 0;
}