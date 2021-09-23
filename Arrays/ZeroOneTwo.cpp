#include <bits/stdc++.h>
using namespace std;

void printSorted012(int arr[], int arrSize)
{
    int zeroCount = 0,
        oneCount = 0,
        twoCount = 0;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
            zeroCount++;
        else if (arr[i] == 1)
            oneCount++;
        else if (arr[i] == 2)
            twoCount++;
    }

    for (int i = 0; i < arrSize; i++)
    {
        if (zeroCount > 0)
        {
            arr[i] = 0;
            cout << arr[i] << " ";
            zeroCount--;
        }
        else if (oneCount > 0)
        {
            arr[i] = 1;
            cout << arr[i] << " ";
            oneCount--;
        }
        else if (twoCount > 0)
        {
            arr[i] = 2;
            cout << arr[i] << " ";
            twoCount--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    printSorted012(arr, arrSize);
    return 0;
}