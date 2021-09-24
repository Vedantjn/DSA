#include<iostream>
#include<algorithm>
using namespace std;

void MinimiseTheHeight(int a[],int k,int n){
    for(int i=0;i<n;i++){
        if((a[i]-k)<0){
            a[i]= a[i]+k;
        }
        else{
            a[i]= a[i]-k;
        }
    }
    sort(a,a+n);

    cout<<(a[n-1]+a[0]);
}

int main(){
    int k,n;
    cin>>k>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    MinimiseTheHeight(a,k,n);

    return 0;
}