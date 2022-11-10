#include <iostream>
using namespace std;
int average(int arr[], int n)
{
    if (n == 0)
    {
        throw string("Array is empty");
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    int avg;
    avg = sum / n;
    return avg;
}
int main()
{
    int n;
    cout << "Enter the number of items:" << "\n";
    cin >> n;
    int *arr = new int(n);
    cout << "Enter " << n << " items" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    try
    {
        int result = average(arr, n);
        cout << (result);
    }
    catch (string &error)
    {
        cout << error;
    }

    return 0;
}