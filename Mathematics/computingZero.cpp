#include <iostream>
using namespace std;

int computingPower(int num, int pow)
{
    int ans = 1;
    for (int i = 0; i < pow; i++)
    {
        ans = ans * num;
    }
    return ans;
}
int main()
{
    int n, pow;
    cin >> n;
    cin >> pow;
    cout << computingPower(n, pow);
    return 0;
}