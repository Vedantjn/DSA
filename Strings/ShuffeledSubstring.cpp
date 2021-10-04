#include <iostream>
using namespace std;

void shuffle()
{
    string s1, s2;
    cin >> s1, s2;

    string res;
    cin >> res;

    int l1 = s1.length();
    int l2 = s2.length();
    int lr = res.length();

    if ((l1 + l2) != lr)
    {
        cout << "No";
    }
    else
    {
        int f = 0;
        int i = 0, j = 0, k = 0;

        while (k < lr)
        {
            if (i < l1 && s1[i] == res[k])
            {
                i++;
            }
            else if (j < l2 && s2[j] == res[k])
            {
                j++;
            }
            else
            {
                f = 1;
                break;
            }
            k++;
        }
        if (i < l1 && j < l2)
        {
            cout << "No";
        }
        else
        {
            cout << "Yes";          
        }
    }
}

int main()
{
    shuffle();
    return 0;
}