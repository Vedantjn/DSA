#include <iostream>
using namespace std;

void CommonElements(int a[], int b[], int c[], int n1, int n2, int n3)
{
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3)
    {
        if (a[i] == b[j] && b[j] == c[k])
        {
            cout << a[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < c[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int a[n1], b[n2], c[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n2; j++)
    {
        cin >> b[j];
    }
    for (int k = 0; k < n3; k++)
    {
        cin >> c[k];
    }

    CommonElements(a, b, c, n1, n2, n3);

    return 0;
}