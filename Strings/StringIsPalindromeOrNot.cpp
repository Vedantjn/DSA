#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string str)
{
    int j, i;
    j = str.size() - 1;
    for (i = 0; j >= i; i++, j--)
    {
        if (str[i] != str[j])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    string str = "abbaa";
    isPalindrome(str);
    // cout << str;
    return 0;
}