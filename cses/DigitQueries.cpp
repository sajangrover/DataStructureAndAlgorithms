#include<bits/stdc++.h>
using namespace std;
long long kthdigit(long long lastNum, long long rem) {
    if(rem == 0){
        return lastNum%10;
    }
    lastNum++;
    vector<int> temp;
    while(lastNum){
        temp.push_back(lastNum%10);
        lastNum = lastNum/10;
    }
    return temp[temp.size()-rem];
}
long long solve(long long k){
    long long prev=0,end = 9,count=9,prevCount=0;
    int i=1;
    while(end < k) {
        prev = end;
        prevCount += count;
        count = count*10;
        i++;
        end = end+ (count*i);
    }
    long long totalILengthDigit= k-prev;
    long long lastNum = prevCount + totalILengthDigit/i;
    long long rem = totalILengthDigit%i;
    return kthdigit(lastNum, rem);

}
int main(){
    int q;
    long long k;
    cin>>q;
    while(q--) {
        cin>>k;
        cout<<solve(k)<<endl;
    }
    return 0;
}
