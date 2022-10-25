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
// bool checkForPrime(int num)
// {
//     if (num == 1 || num <= 0)
//     {
//         return false;
//     }
//     for (int i = 2; i*i < num; i++)
//     {
//         if (num % i == 0)
//             return false;
//         else
//             return true;
//     }
// }

// 3rd Approach for large numbers

bool checkForPrime(int num)
{
    if (num == 1 || num <= 0)
    {
        return false;
    }
    if (num == 2 || num == 3)
    {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return false;
    }

    for (int i = 5; i * i < num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
        else
            return true;
    }
}

int main()
{
    if (checkForPrime(9) == false)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    return 0;
}