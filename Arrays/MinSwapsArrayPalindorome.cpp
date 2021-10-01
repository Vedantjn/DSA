#include <iostream>
using namespace std;

int minOperations(int arr[], int n)
{
    int ans = 0;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else if (arr[i] < arr[j])
        {
            i++;
            arr[i] += arr[i - 1];
            ans++;
        }
        else
        {
            j--;
            arr[j] += arr[j + 1];
            ans++;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {121, 131, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool res = minOperations(arr, n);
    if (res == true)
        cout << "Array is a PalinArray";
    else
        cout << "Array is not a PalinArray";
}
