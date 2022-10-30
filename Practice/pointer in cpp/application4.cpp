// Used for accessing element of array

#include<iostream>
using namespace std;
// int main()
// {
//     int arr[6] = {10, 23, 35, 93, 59, 67};

//     int *ptr = arr;
//     for (int i = 0; i < 6; i++)
//     {
//         cout<<*(ptr + i)<<" ";
//     }
//     return 0;
// }
void printArray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        // cout<<*(ptr + i)<<" ";
        cout<<ptr[i]<<" ";
    }
    
}
int main(){
    int arr[3] = {10, 29, 45};
    printArray(arr, 3);
    return 0;
}