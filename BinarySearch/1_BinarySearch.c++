#include<bits/stdc++.h>
using namespace std;
int search(int a[],int n,int x){
    int start=0;
    int end=n-1,mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(a[mid]==x){
            cout<<x<<" is found at : ";
            return mid;
        }
        else if(a[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    cout<<search(a,n,x)<<endl;
}