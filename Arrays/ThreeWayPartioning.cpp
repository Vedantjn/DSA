#include <vector>    
#include <algorithm>  
#include <iostream>    
#include <queue>

using namespace std;

void getPartition(int arr[], int n, int lowValue, int highValue)
{
    int start_index = 0, endingValue = n-1;
    for (int i=0; i<= endingValue;)
    {
        if (arr[i] < lowValue)
            swap(arr[i++], arr[start_index++]);
        else if (arr[i] > highValue)
            swap(arr[i], arr[endingValue--]);
        else
            i++;
    }
}
int main()
{
    int arr[] = {1, 14, 5, 20, 4, 2, 54, 20, 87, 98, 3, 1, 32};
    int n = sizeof(arr)/sizeof(arr[0]);

    getPartition(arr, n, 10, 20);
    
    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}