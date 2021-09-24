#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int doUnion(int a[], int n, int b[], int m)
    {
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            s.insert(a[i]);
        }
        for (int j = 0; j < m; j++)
        {
            s.insert(b[j]);
        }

        return s.size();
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> n;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> (a[i]);
        }
        for (int j = 0; j < m; j++)
        {
            cin >> (b[j]);
        }

        Solution ob;
        cout << ob.doUnion(a, n, b, m) << endl;
    }
    return 0;
}