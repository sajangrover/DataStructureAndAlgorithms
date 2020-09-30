#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> path(7,vector<int> (7,0));
int c=0;
string str;
bool ispossible(int i,int j){
    return i>=0 && i<7 && j>=0 && j<7 && (path[i][j]==0);
}
void countPath(int p,int i,int j){
    if(i==6 && j==0){
        if(p==48)
            c++;
        return;
    }

    path[i][j]=1;
    if(str[p]=='?' || str[p]=='D'){
        if(i+1<7 && path[i+1][j]==0){
            if(ispossible(i+2,j) || !(ispossible(i+1,j-1) && ispossible(i+1,j+1))){
                countPath(p+1,i+1,j);
            }
        }
    }
    if(str[p]=='?' || str[p]=='U'){
        if((i-1>=0) && path[i-1][j]==0){
            if(ispossible(i-2,j) || !(ispossible(i-1,j-1) && ispossible(i-1,j+1))){
                countPath(p+1,i-1,j);
            }
        }
    }
    if(str[p]=='?' || str[p]=='L'){
        if((j-1>=0) && path[i][j-1]==0){
            if(ispossible(i,j-2) || !(ispossible(i-1,j-1) && ispossible(i+1,j-1))){
                countPath(p+1,i,j-1);
            }
        }
    }
    if(str[p]=='?' || str[p]=='R'){
        if((j+1<7) && path[i][j+1]==0){
            if(ispossible(i,j+2) || !(ispossible(i-1,j+1) && ispossible(i+1,j+1))){
                countPath(p+1,i,j+1);
            }
        }
    }
    path[i][j]=0;
}
int main(){
    cin>>str;
    countPath(0,0,0);
    cout<<c;
    return 0;
}