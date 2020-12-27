#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,room=0;
    cin>>n;
    vector<vector<long long>> vp(n, vector<long long> (3));
    for(long long i=0;i<n;i++){
        cin>>vp[i][0]>>vp[i][1];
        vp[i][2]=i;
    }
    sort(vp.begin(),vp.end());
    multiset<long long> mp;
    vector<long long> res(n);
    map<long long ,vector<long long>> pos;
    for (long long i=0;i<n;i++) {
        auto l = mp.lower_bound(vp[i][0]);

        if(l == mp.begin()){
            room++;
            res[vp[i][2]] = room;
            pos[vp[i][1]].push_back(room);
        }
        else {
            l--;
            res[vp[i][2]] = pos[*l].back();
            pos[vp[i][1]].push_back(res[vp[i][2]]);
            pos[*l].pop_back();
            mp.erase(mp.find(*l));
        }
        mp.insert(vp[i][1]);
    }
    cout<<room<<endl;
    for(long long i=0;i<n;i++){
        cout<<res[i]<<" ";
    }
    return 0;
}

