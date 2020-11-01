#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    multiset<long long, greater<long long>> h;
    long long t;
    for(int i=0;i<n;i++){
        cin>>t;
        h.insert(t);
    }
    for(int j=0;j<m;j++){
        cin>>t;
        auto it = h.lower_bound(t);
        if(it == h.end()){
            cout<<-1<<endl;
        }
        else{
            cout<<*it<<endl;
            h.erase(it);
        }
    }
   
    
    return 0;
}