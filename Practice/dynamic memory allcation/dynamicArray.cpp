#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *arr = new int(n);
    cout<<"Enter "<<n<<" numbers: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Print array: "<<endl;
    for(int i = 0; i< n; i++){
        cout<<arr[i]<<" ";
    }

       
    return 0;
}