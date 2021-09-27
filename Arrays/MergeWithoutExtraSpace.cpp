#include <iostream>
#include <algorithm>
using namespace std;

void merge(int a[], int b[], int n, int m)
{
    int j = 0, i = n - 1;
    while (i >= 0 && j < m)
    {
        if (a[i] > b[j])
        {
            swap(a[i], b[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(a, a + n);
    sort(b, b + m);
}

int main()
{
    int n, m;
    cin >> m >> n;
    int a[n];
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    merge(a, b, m, n);
    for (int i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
}
// ------------------------------------------------------------------------------------------
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int mwes(int a[],int b[],int m,int n){
//     sort(a,a+n);
//     sort(b,b+m);

//     int c[m+n];

//     for(int i=0;i<n;i++)
//     {
//         c[i]=a[i];
//     }
//     for(int j=n;j<m+n;j++){
//         int i=0;
//         c[j]=b[i];
//         i++;
//     }
//     sort(c,c+m+n);
//     return c[m+n];
// }

// int main(){
//     int n,m;
//     cin>>n>>m;

//     int a[n];
//     int b[m];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int j=0;j<m;j++){
//         cin>>b[j];
//     }
//     mwes(a,b,m,n);
//     for(int i=0;i<n;i++){
//         cout<<a[i];
//     }
//     for(int j=0;j<m;j++){
//         cout<<b[j];
//     }


//     return 0;
// }

