// Changing passed parameters

#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 19;
    cout<<"Before swapping a = "<<a<<" and b = "<<b<<endl;
    swap(&a, &b);
    cout<<"After swapping a = "<<a<<" and b = "<<b<<endl;    
    return 0;
}