#include<bits/stdc++.h>
using namespace std;
set<string> res;
void nextPermutation(string str, int n ,int j){
    if(j==n){
        res.insert(str);
    }
    for(int i=j;i<n;i++){
        swap(str[i],str[j]);
        nextPermutation(str,n,j+1);
        swap(str[i],str[j]);
    }

}
int main(){
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    nextPermutation(str,str.size(),0);
    cout<<res.size()<<endl;
    for(auto x: res){
        cout<<x<<endl;
    }
    return 0;
}