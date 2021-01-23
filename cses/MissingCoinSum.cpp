#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    sort(a,a+n);
    unsigned long long ans=1;
    for(int i=0;i<n;i++){
        if(ans < a[i])
            break;
        else
            ans += a[i];
    }
    cout<<ans<<endl;

    return 0;
}


