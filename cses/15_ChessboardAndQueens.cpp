#include<bits/stdc++.h>
using namespace std;

int ans=0;
vector<string> board(8);
bool isValid(int row, int col){
    int i=row-1, j=col-1;
    while(i>=0 && j>=0){
        if(board[i][j]=='Q')
            return false;
        i--;
        j--;
    }
    i=row-1;
    j=col+1;
    while(i>=0 && j<=7){
        if(board[i][j]=='Q')
            return false;
        i--;
        j++;
    }
    for(i=0;i<row;i++){
        if(board[i][col]=='Q')
            return false;
    }
    return true;
}
void totalWays(int row){
    if(row==8){
        ans++;
        return;
    }
    for(int col=0;col<8;col++){
        if(board[row][col]=='.'){
            if(isValid(row,col)){
                board[row][col] ='Q';
                totalWays(row+1);
                board[row][col] ='.';
            }
        }
    }
}
int main(){
    for(int i=0;i<8;i++){
        cin>>board[i];
    }
    totalWays(0);
    cout<<ans;
    return 0;
}