#include <iostream>
using namespace std;

int trailingZeroOfFactorial(int num)
{
    // 1st Approach
    // long long int fact = 1;
    // int remainder = 0;
    // int ans = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     fact = fact * i;
    // }
    // while (fact > 0)
    // {
    //     remainder = fact % 10;
    //     fact = fact / 10;
    //     if (remainder == 0)
    //     {
    //         ans++;
    //     }
    // }
    // while (fact % 10 == 0)
    // {
    //     ans++;
    //     fact /= 10;
    // }

    // return ans;



    // 2nd Approach

    int ans = 0;
    for (int i = 5; i <= num; i*=5)
    {
        ans = ans + (num / i);
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Count of trailing zero in " << n << " is: " << trailingZeroOfFactorial(n);
    return 0;
}