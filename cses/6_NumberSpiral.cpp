#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        long long x,y;
        cin>>x>>y;
        long long mx = max(x,y)-1;
        unsigned long long int ans;
        ans = (mx*mx);
        ans = ans + max(x,y);
        if(x!=y){
            if(max(x,y)%2){
                ans +=  y-x;
            }
            else{
                ans += x-y;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}