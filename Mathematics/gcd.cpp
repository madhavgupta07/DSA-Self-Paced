#include <iostream>
using namespace std;

int minimum(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int gcd(int a, int b)
{
    int gcd = minimum(a, b);
    while (gcd > 0)
    {
        if (a % gcd == 0 && b % gcd == 0)
        {
            break;
        }
        gcd--;
    }
    return gcd;
}
int main()
{
    cout << gcd(10, 15);
    return 0;
}