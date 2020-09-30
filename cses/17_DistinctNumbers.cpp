#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long x;
    set<long long> s;
    while(n--){
       cin>>x;
       s.insert(x);
    }
    cout<<s.size();
    return 0;
}