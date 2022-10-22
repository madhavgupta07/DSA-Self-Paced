#include<iostream>
using namespace std;

int trailingZeroOfFactorial(int num){
    int fact = 1;
    int remainder = 0;
    int ans = 0;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    while (fact > 0)
    {
        remainder = fact % 10;
        fact = fact / 10;
        if (remainder == 0)
        {
            ans++;
        }
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