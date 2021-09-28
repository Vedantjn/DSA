#include <iostream>
using namespace std;
int Factorial(int n)
{
    int fact = 1;
    
    for (int i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    cout << fact;
    return 0;
}

int main()
{
    long int n;
    cin >> n;

    Factorial(n);

    return 0;
}