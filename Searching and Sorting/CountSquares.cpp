#include <iostream>
#include <vector>
using namespace std;

int countSquares(int n)
{
    vector<int> ans;
    for (int i = 1; i < n; i++)
    {
        if (i * i < n)
            ans.push_back(i * i);
        else
            break;
    }
    ans.shrink_to_fit();
    return ans.size();
}

int main()
{
    int n;
    cin >> n;

    countSquares(n);

    return 0;
}