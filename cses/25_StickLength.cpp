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
    if(n%2){
        x = a[n/2];
        y=x;
    }
    else {
        x = a[(n/2) -1];
        y = a[n/2];
    }

    unsigned long long int ans1=0,ans2=0;
    for(int i=0;i<n;i++){
       ans1 += abs(x-a[i]);
       ans2 += abs(y-a[i]);
    }
    cout<<min(ans1,ans2);
    return 0;
}