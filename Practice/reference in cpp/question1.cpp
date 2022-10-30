#include<iostream>
using namespace std;


int main()
{
         
    int x = 10, z = 30;
    int &y = x;
    y = z;
    x = x + 5;
    cout<<x<<" "<<y<<" "<<z;
    return 0;
}