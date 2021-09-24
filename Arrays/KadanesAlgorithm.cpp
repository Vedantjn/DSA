#include <iostream>
using namespace std;

//Function to find maximum sum contiguous subarray in a given set of integers

int kadane(int arr[], int n)
{
    //stores maximum sum subarray found so far

    int maxSum = 0;

    //stores the maximum sum of subarray ending at the current position

    int currentSum = 0;

    //traverse the given array

    for (int i = 0; i < n; i++)
    {
        /* update maximum sum of subarray "ending" at index i (by adding the current element to maximum sum ending at previous index i-1) */

        currentSum = currentSum + arr[i];

        /* if maximum sum is negative, set it to 0 (which represents an empty sub-array) */
        if (currentSum < 0)
        {
            currentSum = 0;
        }

        //update result if current subarray sum is found to be greater
        if (maxSum < currentSum)
        {
            maxSum = currentSum;
        }
        return maxSum;
    }
}

    int main()
    {
// if all elements are negative then maxSum should be initialized to minus infinity or INT_MIN
        int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << "Maximum sum contiguous subarray is " << kadane(arr, n);
        return 0;
    }
