#include <iostream>
using namespace std;

bool palindromeCheck(int num)
{
    int remainder, reverse = 0;
    int temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (reverse == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    if (palindromeCheck(n))
    {
        cout<<"Yes "<<n<<" is palindrome";
    }
    else
    {
        cout<<"No "<<n<<" is not palindrome";
    }
    return 0;
}