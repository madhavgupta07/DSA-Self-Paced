#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 23};
    int *ptr = arr;
    // ++*ptr; // ++(*ptr)
    // *ptr++; // *(ptr++)
    // *++ptr; // *(++ptr)
    cout<<arr[0]<<" "<<arr[1]<<" "<<*ptr<<" ";
    return 0;
} 