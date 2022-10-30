// To return multiple values

#include<iostream>
using namespace std;

void addMultiply(int x, int y, int *add, int *mul){
    *add = x + y;
    *mul = x * y;
}
int main()
{
    int a = 10, b = 20;
    int add, mul;
    addMultiply(a,b,&add, &mul);

    cout<< add<<" "<<mul;     
    return 0;
}