#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void printIntersection(int a[], int b[], int n,
                       int m)
{
    set<int> hs;

    for (int i = 0; i < n; i++)
        hs.insert(a[i]);

    for (int i = 0; i < m; i++)
        if (hs.find(b[i]) != hs.end())
            cout << b[i] << " ";
}

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

        printIntersection(a, b, n, m);
    }
    return 0;
}

// ---------------------------------------------------------------------------------------
// #include <bits/stdc++.h>

// using namespace std;

// void intersection(int a[], int b[], int n, int m)
// {
//     int i = 0, j = 0;
//     while (i < n && j < m) {
//         if (a[i] > b[j]) {
//             j++;
//         }
//         else if (b[j] > a[i]) {
//             i++;
//         }
//         else {

//             // when both are equal
//             cout << a[i] << " ";
//             i++;
//             j++;
//         }
//     }
// }

// int main()
// {
//     int a[] = { 1, 3, 2, 3, 3, 4, 5, 5, 6 };
//     int b[] = { 3, 3, 5 };

//     int n = sizeof(a) / sizeof(a[0]);
//     int m = sizeof(b) / sizeof(b[0]);

//     // sort
//     sort(a, a + n);
//     sort(b, b + m);

//     // Function call
//     intersection(a, b, n, m);
// }