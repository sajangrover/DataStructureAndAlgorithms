#include<bits/stdc++.h>
using namespace std;
long long mod = 1000000007;
long long int bitStrings(long long n) {
    if(n==1)
        return 2;
    
    if(n%2){
        return (2*bitStrings(n-1))%mod;
    }
    else{
        long long temp = bitStrings(n/2);
        return (temp%mod * temp%mod)%mod;
    }
}
int main(){
    long long n;
    cin>>n;
    cout<<bitStrings(n)<<endl;
    return 0;
}