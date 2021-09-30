#include <iostream>
#include <climits>
using namespace std;

int smallestsubarray(int arr[], int n, int x)
{
    if (n == 0)
        return -1;

    int start = 0; 
    int end = 0; 
    int minLength = n+1;
    int ans = INT_MAX;
    int sum = 0;

    while(end<n){
        while(sum<=x && end<n){
            sum+=arr[end++];
        }
        while(sum>x && start<n){
            if(end -start<minLength){
                minLength=end-start;
            }
            sum-=arr[start++];
        }
    }
    return minLength;
}

int main(){
    int arr[]={1,4,45,6,10,19};
    int x=51;
    int n=6;

    int minLength=smallestsubarray(arr,n,x);

    if(minLength==n+1){
        cout<<"No such subarray exists"<<endl;
    }
    else{
        cout<<"Smallest length subarray is: "<<minLength;
    }
    return 0;
}