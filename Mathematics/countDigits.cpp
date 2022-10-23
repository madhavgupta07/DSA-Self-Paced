#include <iostream>
using namespace std;

int countDigits(int num)
{
    int ans = 0;
    while (num > 0)
    {
        num = num / 10;
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Total number of digits in " << n << " is: - " << countDigits(n);
    return 0;
}