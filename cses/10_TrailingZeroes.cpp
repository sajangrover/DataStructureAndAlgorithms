#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long count =0;
    while(n>=5){
        count += n/5;
        n = n/5;
    }
    cout<<count<<endl;
    return 0;
}