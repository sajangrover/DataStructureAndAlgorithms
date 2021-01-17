#include<bits/stdc++.h>
using namespace std;
vector<string> res;
void solve(int n){
    if(n==1)
        return;
    
    solve(n-1);
    int s = res.size();
    string str;
    for(int i=s-1;i>=0;i--){
        str = '1' + res[i];
        res.push_back(str);
    }
    for(int i=0;i<s;i++){
        res[i] = '0'+res[i];
    }
    
}
int main(){
    int n;
    cin>>n;
    res.push_back("0");
    res.push_back("1");
    solve(n);
    n = res.size();
    for(int i=0;i<n;i++){
        cout<<res[i]<<endl;
    }
    return 0;
}


