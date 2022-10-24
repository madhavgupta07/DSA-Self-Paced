#include <iostream>
using namespace std;

// int minimum(int a, int b)
// {
//     if (a < b)
//     {
//         return a;
//     }
//     else
//     {
//         return b;
//     }
// }

// // 1st Approach
// int gcd(int a, int b)
// {
//     int gcd = minimum(a, b);
//     while (gcd > 0)
//     {
//         if (a % gcd == 0 && b % gcd == 0)
//         {
//             break;
//         }
//         gcd--;
//     }
//     return gcd;
// }

// 2nd Approach Euclid's approach
// int gcd(int a, int b){
//     while (a != b)
//     {
//         if (a > b)
//         {
//             a = a - b;
//         }
//         else{
//             b = b - a;
//         }
//     }
//     return a;
// }

// 3rd Approach
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int main()
{
    cout << gcd(10, 15);
    return 0;
}