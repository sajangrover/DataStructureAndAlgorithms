#include<bits/stdc++.h>
using namespace std;
// hint: longest increasing subsequence

int upperIndex(vector<long long> &v, long long x){
    int l=0;
    int r=v.size()-1,mid;
    while(l<=r){
        mid = l+(r-l)/2;
        if (v[mid]>x) 
            r=mid-1;
        else
            l=mid+1;
    }
    return l;
}
int main(){
    long long n;
    cin>>n;
    long long a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<long long> vec;
    vec.push_back(a[0]);
    for(int i=1;i<n;i++){
      if(a[i]<vec[0])
        vec[0] = a[i];
      else if(a[i]>=vec[vec.size()-1])
        vec.push_back(a[i]);
      else
        vec[upperIndex(vec,a[i])] = a[i];
    }
    cout<<vec.size();
    return 0;
}