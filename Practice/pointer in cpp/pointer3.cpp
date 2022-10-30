#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int * ptr = &x;
    cout<< *ptr<<endl;
    x = x + 10;
    cout<< *ptr<<endl;
    cout<< ptr<<endl;
    *ptr = *ptr + 30;
    cout<< x << endl;     
    return 0;
}