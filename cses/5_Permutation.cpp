#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1;
    }
    else if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else{
        int i=1,j;
        int m = n/2;
        j=m+1;
        while(i<=m){
            cout<<j++<<" "<<i++<<" ";
        }
        if(n%2){
            cout<<j;
        }
    }
    return 0;
}