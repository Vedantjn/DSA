#include<iostream>
using namespace std;

int Mnoj(int a[],int n){
    int jumps=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            jumps=-1;
            break;
        }
        if(a[i+1]==0){
            break;
        }
        if(a[i]!=0){
            i+=a[i];
            jumps++;
        }
    }
    return jumps;
}

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Mnoj(a,n);
    return 0;
}