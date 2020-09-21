#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(((n*(n+1))/2)%2==1){
        cout<<"NO"<<endl;
    }
    else{
        priority_queue<int, vector<int>, greater<int>> a,b;
        int start=1,end=n,flip=1;
        if(n%2) {
            a.push(start++);
        }
        while(start<=end){
            if(n%2 && end-start==1){
                a.push(start++);
                b.push(end--);
            }
            else if(flip){
                a.push(start++);
                a.push(end--);
            }
            else{
                b.push(start++);
                b.push(end--);
            }
            flip = 1-flip;
        }
        cout<<"YES"<<endl;
        cout<<a.size()<<endl;
        while(!a.empty()){
            cout<<a.top()<<" ";
            a.pop();
        }
        cout<<endl<<b.size()<<endl;
        while(!b.empty()){
            cout<<b.top()<<" ";
            b.pop();
        }
    }
    return 0;
}