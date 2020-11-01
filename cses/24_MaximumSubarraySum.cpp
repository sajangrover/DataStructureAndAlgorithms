#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,sum,ans;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sum =ans = a[0];
    for(int i=1;i<n;i++){
        if(sum+a[i]<a[i])
            sum = a[i];
        else
            sum += a[i];
        ans = max(ans,sum);
    }
    cout<<ans;
    return 0;
}