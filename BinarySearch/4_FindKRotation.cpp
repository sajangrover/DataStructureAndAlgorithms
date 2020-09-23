// Find the Rotation Count in Rotated Sorted array
// The array has been rotated (clockwise) k number of times.
// Given such an array, find the value of k.
// original array a[] = {2, 3, 6, 12, 15, 18}
// input a[] = {15, 18, 2,Given such an array, find the value of k. 3, 6, 12}
// output = 2


#include<bits/stdc++.h>
using namespace std;
int findKRotation(int arr[], int n) {
    int start=0,end=n-1,ans=0;
    while(start<=end){
        int mid = start + (end-start)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        
        if(arr[prev]>arr[mid] && arr[mid]<=arr[next]){
            ans = mid;
            break;
        }
        else if(arr[mid]>arr[end]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findKRotation(a,n)<<endl;
}