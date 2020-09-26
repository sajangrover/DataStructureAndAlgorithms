#include<bits/stdc++.h>
using namespace std;
long long appleDivision(long long arr[],int n, long long sum){
    if(n==0)
        return 0;
    
    if(arr[n-1] <= sum) {
        return max(arr[n-1]+appleDivision(arr,n-1,sum-arr[n-1]), appleDivision(arr,n-1,sum));
    }
    else{
        return appleDivision(arr,n-1,sum);
    }
}
int main(){
    int n;
    cin>>n;
    long long arr[n],sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum += arr[i];
    }
    long long temp = appleDivision(arr,n,sum/2);
    cout<<sum-2*temp<<endl;
    return 0;
}