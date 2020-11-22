#include<bits/stdc++.h>
using namespace std;

int main(){
    long long x,n;
    cin>>x>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    multiset<long long> pos;
    map<long long, int> mp;
    pos.insert(0);
    pos.insert(a[0]);
    pos.insert(x);
    mp[a[0]-0]++;
    mp[x-a[0]]++;
    cout<<mp.rbegin()->first<<" ";
    for(int i=1;i<n;i++){
       auto u = pos.upper_bound(a[i]); //use binary search
       auto l = u;
       l--;
       if(mp[*u - *l] > 1){
           mp[*u - *l]--;
       }
       else{
           mp.erase(*u -*l);
       }
       pos.insert(a[i]);
       mp[a[i]-*l]++;
       mp[*u-a[i]]++;
      
       cout<<mp.rbegin()->first<<" ";
    }

   
    return 0;
}