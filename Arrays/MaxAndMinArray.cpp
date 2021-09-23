#include<iostream>
using namespace std;

void MaxAndMin(int a[],int &min,int &max,int n){
    max=a[0];
    min=a[0];

    for(int i=0;i<n;i++){
        if(a[i]>a[0]){
            max=a[i];
        }
        else if(a[i]<min){
            min=a[i];
        }
    }
}

int main(){
    int a[]={2,1,4,3};
    int min,max;
    int n=sizeof(a)/sizeof(a[0]);

    MaxAndMin(a,min,max,n);

    cout<<"Maximum element is:" << max<<endl;
    cout<<"Minimum element is:" << min;
    return 0;
}