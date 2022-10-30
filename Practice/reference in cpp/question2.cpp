#include<iostream>
using namespace std;

int &fun(){
    static int x = 10;
    return x;
}
int main()
{
    int &z = fun();
    cout<< z << " "<< fun()<<endl;  
    z = 30;
    cout<< z << " "<< fun();  
    return 0;
}