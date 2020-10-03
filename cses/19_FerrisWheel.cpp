#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x;
    cin>>n>>x;
    long long weight[n];
    for(int i=0;i<n;i++){
        cin>>weight[i];
    }
    sort(weight,weight+n);
    int ans=0,i=0;
    n--;
    while(i<=n){
        if(weight[i]+weight[n]<=x){
            i++;
            n--;
        }
        else if(weight[i]+weight[n]>x){
            n--;
        }
        ans++;
    }
    cout<<ans;
    return 0;
}