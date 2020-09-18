#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    for(long long int i=1;i<=n;i++){
        if(i==1){
            cout<<0<<endl;
        }
        else if(i==2){
            cout<<6<<endl;
        }
        else if(i==3){
            cout<<28<<endl;
        }
        else if(i==4){
            cout<<96<<endl;
        }
        else{
            unsigned long long int ans = ((i*i)*(i*i-1))/2;
            ans -= (4*(i-2) + 6*(i-2) + (4*(i-4)*(i-2)));
            ans -= (4 + 2*(i-4));
            cout<<ans<<endl;
        }
    }
    return 0;
}