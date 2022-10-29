// To modify a parallel parameter
#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return;
}
int main()
{
    int a = 10, b = 15;
    cout<<"Before swapping"<<endl;
    cout<< a << " "<< b<<endl;
    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<< a << " "<< b<<endl;
    return 0;
}