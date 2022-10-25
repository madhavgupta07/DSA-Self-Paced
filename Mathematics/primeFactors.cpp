#include <iostream>
using namespace std;

// 1st Approach

// bool isPrime(int num)
// {
//     if (num == 1 || num <= 0)
//     {
//         return false;
//     }
//     if (num == 2 || num == 3)
//     {
//         return true;
//     }
//     if (num % 2 == 0 || num % 3 == 0 || num % 25 == 0)
//     {
//         return false;
//     }

//     for (int i = 5; i * i < num; i += 6)
//     {
//         if (num % i == 0 || num % (i + 2) == 0)
//             return false;
//         else
//             return true;
//     }
// }
// void primeFactors(int num)
// {
//     for (int i = 2; i < num; i++)
//     {
//         if (isPrime(i))
//         {
//             int x = i;
//             while (num % x == 0)
//             {
//                 cout << i << " ";
//                 x = x * i;
//             }
//         }
//     }
// }

// 2nd Approach

void primeFactors(int num)
{
    if (num <= 1)
    {
        return;
    }
    for (int i = 2; i * i <= num; i++)
    {
        while (num % i == 0)
        {
            cout << i << " ";
            num = num / i;
        }
    }
}

int main()
{
    primeFactors(450);
    return 0;
}