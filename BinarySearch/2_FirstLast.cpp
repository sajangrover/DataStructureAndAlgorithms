
//Find first and last occurrence of an element

#include<bits/stdc++.h>
using namespace std;

int res=-1;
int search(int a[],int n,int x, string srch){
    int start=0;
    int end=n-1,mid;
    while(start<=end){
        mid = start + (end-start)/2;
        if(a[mid]==x){
            res = mid;
            if(srch == "first"){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        else if(a[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return res;
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
    int first = search(a,n,x,"first");
    if(first == -1){
        cout<<"Element Not Found"<<endl;
    }
    else{
        int last = search(a,n,x ,"last");
        cout<<"Fisrt index : "<<first<<" , Last Index : "<<last<<endl;
    }
}