#include <iostream>
using namespace std;

// 1st Approach
// bool checkForPrime(int num)
// {
//     if (num == 1 || num <= 0)
//     {
//         return false;
//     }
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//             return false;
//         else
//             return true;
//     }
// }

// 2nd Approach
bool checkForPrime(int num)
{
    if (num == 1 || num <= 0)
    {
        return false;
    }
    for (int i = 2; i*i < num; i++)
    {
        if (num % i == 0)
            return false;
        else
            return true;
    }
}

int main()
{
    if (checkForPrime(1563))
    {
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}