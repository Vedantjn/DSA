#include<iostream>
using namespace std;

void Reverse(int *a){
    for(int i=sizeof(a)-1;i>=0;i--){
        cout<<a[i]<<" ";
    } 
}

int main(){
    int a[]={1,2,3,4};
    Reverse(a);
    // return 0;
}