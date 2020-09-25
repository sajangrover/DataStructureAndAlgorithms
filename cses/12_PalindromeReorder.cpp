#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int odd=0;
    string left="",right="",mid="";
    unordered_map<char,int> mp;
    for(auto ch : str){
        mp[ch]++;

        if(mp[ch]%2)
            odd++;
        else
            odd--;
    }
    
    if(odd>1){
        cout<<"NO SOLUTION";
    }
    else{ 
        for(auto x : mp){
            string s(x.second/2, x.first);
            left = left +s;
            right = s+right;

            if(x.second%2)
                mid = x.first;
        }

        cout<<left<<mid<<right;
    }
    return 0;
}