#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int n = str.size();
    int ans=1,cur=1;
    for(int i=1;i<n;i++){
        if(str[i]==str[i-1]){
            cur++;
        }
        else{
            cur = 1;
        }
        ans = max(ans,cur);
    }
    cout<<ans;
    return 0;
}