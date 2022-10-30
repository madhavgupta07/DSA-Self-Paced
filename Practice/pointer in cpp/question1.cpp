#include<iostream>
using namespace std;
int main()
{
    int arr[] = {19, 20, 24};
    int *ptr = arr;
    cout<<sizeof(arr)<<" "<<sizeof(ptr);     
    return 0;
}