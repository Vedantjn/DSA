#include <iostream>
using namespace std;

int linearSearch(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
            return i;
    }

    /* If no fixed point present then return -1 */
    return -1;
}
int main()
{
    int arr[] = {3, 4, 5, 6, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    linearSearch(arr, n);
    return 0;
}