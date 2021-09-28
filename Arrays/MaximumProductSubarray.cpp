// #include <bits/stdc++.h>
// using namespace std;
 
// /* Returns the product of max product subarray.*/
// int maxSubarrayProduct(int arr[], int n)
// {
//     // Initializing result
//     int result = arr[0];
 
//     for (int i = 0; i < n; i++)
//     {
//         int mul = arr[i];
//         // traversing in current subarray
//         for (int j = i + 1; j < n; j++)
//         {
//             // updating result every time
//             // to keep an eye over the maximum product
//             result = max(result, mul);
//             mul *= arr[j];
//         }
//         // updating the result for (n-1)th index.
//         result = max(result, mul);
//     }
//     return result;
// }
 
// // Driver code
// int main()
// {
//     int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout << "Maximum Sub array product is "
//          << maxSubarrayProduct(arr, n);
//     return 0;
// }
 
//  ------------------------------------------------------------------------
#include <iostream>
using namespace std;

//Function to find maximum product contiguous subarray in a given set of integers

int maxProduct(int arr[], int n)
{
    //stores maximum product subarray found so far

    int maxProduct = 0;

    //stores the maximum product of subarray ending at the current position

    int currentProduct = 0;

    //traverse the given array

    for (int i = 0; i < n; i++)
    {
        /* update maximum product of subarray "ending" at index i (by adding the current element to maximum product ending at previous index i-1) */

        currentProduct = currentProduct * arr[i];

        /* if maximum product is negative, set it to 0 (which represents an empty sub-array) */
        if (currentProduct < 0)
        {
            currentProduct = 0;
        }

        //update result if current subarray product is found to be greater
        if (maxProduct < currentProduct)
        {
            maxProduct = currentProduct;
        }
        return maxProduct;
    }
}

    int main()
    {
// if all elements are negative then maxProduct should be initialized to minus infinity or INT_MIN
        int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << "Maximum product contiguous subarray is " << maxProduct(arr, n);
        return 0;
    }
    
