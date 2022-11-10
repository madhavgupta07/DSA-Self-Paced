#include<iostream>
using namespace std;
class arraySizeZero{

};
class arraySizeNegative{

};
int average(int arr[], int n){
    if(n == 0){
        throw arraySizeZero();
    }
    if(n < 0){
        throw arraySizeNegative();
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum/n;
    
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    try
    {
        int res = average(arr, n);
        cout<< "Result is: "<<res;
    }
    catch(arraySizeZero &error1)
    {
       cout<<"Array size is zero: "<<endl;
    }
    catch(arraySizeNegative &error2){
        cout<<"Array size is negative: "<<endl;
    }
    return 0;
}