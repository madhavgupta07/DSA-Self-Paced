#include <iostream>
using namespace std;

bool checkForPrime(int num)
{
    if (num == 1 || num <= 0)
    {
        return false;
    }
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
        else
            return true;
    }
}

int main()
{
    if (checkForPrime(121))
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}