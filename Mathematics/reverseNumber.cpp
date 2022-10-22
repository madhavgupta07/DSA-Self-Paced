#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int remainder, reverse = 0;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }
    return reverse;
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    cout << "Reverse of " << n << " is: " << reverseNumber(n);
    return 0;
}