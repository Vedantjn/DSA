#include <iostream>
#include <unordered_set>
using namespace std;
bool isSubArrayZero(int arr[], int n)
{
    unordered_set<int> Set;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum == 0 || Set.find(sum) != Set.end())
            return true;
        Set.insert(sum);
    }
    return false;
}
int main()
{
    int arr[] = {-3, 2, 1, 9, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    if (isSubArrayZero(arr, n))
        cout << "Yes, a sub-array with sum 0 exist";
    else
        cout << "No, a sub-array with sum 0 does not exist";
    return 0;
}
// ----------------------------------------------------------------------------------/
// Brute - Force
// #include <iostream>
// #include <unordered_map>
// using namespace std;

// // Function to print all subarrays with a zero-sum
// // in a given array
// void printAllSubarrays(int arr[], int n)
// {
//     // consider all subarrays starting from `i`
//     for (int i = 0; i < n; i++)
//     {
//         int sum = 0;

//         // consider all subarrays ending at `j`
//         for (int j = i; j < n; j++)
//         {
//             // sum of elements so far
//             sum += arr[j];

//             // if the sum is seen before, we have found a subarray
//             // with zero-sum
//             if (sum == 0) {
//                 cout << "Subarray [" << i << "…" << j << "]\n";
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[] = { 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
//     int n = sizeof(arr)/sizeof(arr[0]);

//     printAllSubarrays(arr, n);

//     return 0;
// }
