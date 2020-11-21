#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,y;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
   
    x = a[n/2];

    unsigned long long int ans=0;
    for(int i=0;i<n;i++){
       ans += abs(x-a[i]);
    }
    cout<<ans;
    return 0;
}