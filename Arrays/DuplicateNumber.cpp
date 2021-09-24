#include<iostream>
#include<algorithm>
using namespace std;

class Solution {
    public:
     int DuplicateNumber(int a[],int n) {
        sort(a,a+n);
        int res = -1;
        for(int i=1; i< n; i++){
            if(a[i] == a[i-1]){
                res = a[i];
                break;
            }
        }
        return res;
    }
};

int main(){
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Solution ob;
    ob.DuplicateNumber(a,n);
    return 0;
}