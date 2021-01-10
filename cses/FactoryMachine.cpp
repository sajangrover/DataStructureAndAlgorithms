#include<bits/stdc++.h>
using namespace std;
bool isValid(long long k[], unsigned long long int val, long long n, long long t){
    unsigned long long int temp=0;
    for(int i=0;i<n;i++){
        temp += (val/k[i]);
        if(temp>=t){
            return true;
        }
    }
    return false;
}
int main(){
    long long n,t;
    cin>>n>>t;
    long long k[n];
    for(int i=0;i<n;i++){
        cin>>k[i];
    }
    sort(k,k+n);
    unsigned long long int l=0, r=1000000000000000000,mid,ans;
  //  long long ans;

    while(l<=r){
        mid = l + (r-l)/2;
        if(isValid(k,mid,n,t)){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    cout<<ans;
    return 0;
}

