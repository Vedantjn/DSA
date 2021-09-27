#include <iostream>
using namespace std;

int MaxProfit(int a[], int n)
{

    int minsofar = a[0];
    int maxprofit = 0;
    for (int i = 0; i < n; i++)
    {
        int profit = a[i] - minsofar;
        if (a[i] < minsofar)
            minsofar = a[i];
        else if (profit > maxprofit)
            maxprofit = profit;
    }
    return maxprofit;
};

int main()
{
    int a[] = {2, 4, 6, 3, 7};
    int n = sizeof(a) / sizeof(a[0]);
    MaxProfit(a, n);
    return 0;
}