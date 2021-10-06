#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class NextPermutation {
public:
    void nextPermutation(vector<int> &num) {
        int size = num.size();
        int k=-1;
        int l;
        //step1
        for (int i=0;i<size-1;i++){
            if (num[i]<num[i+1]){
                k=i;
            }
        }
        if (k==-1){
            sort(num.begin(),num.end());
            return;
        }
        
        //step2
        for (int i=k+1;i<size;i++){
            if (num[i]>num[k]){
                l=i;
            }
        }
        //step3        
        int tmp = num[l];
        num[l]=num[k];
        num[k]=tmp;
        //step4
        reverse(num.begin()+k+1,num.end());
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        vector<int>ans=nextPermutation(N,arr);
        for(int u:ans){
            cout<<u<<" ";
        }
        cout<<"\n";
    }
    return 0;
}