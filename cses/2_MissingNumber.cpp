#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int x;
    long long missingNumber = (n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        cin>>x;
        missingNumber -= x;
    }
    cout<<missingNumber<<endl;
    return 0;
}