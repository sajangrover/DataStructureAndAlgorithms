#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,m,k;
    cin>>n>>m>>k;
    long long a[n],b[m];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int i=0,j=0,ans=0;
    while(i<n && j<m){
        if((b[j]-k)<=a[i] && (b[j]+k)>=a[i]){
            ans++;
            i++;
            j++;
        }
        else if((b[j]+k)<a[i]){
            j++;
        }
        else{
            i++;
        }
    }
    cout<<ans;
    return 0;
}