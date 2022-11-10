#include<iostream>
using namespace std;

void f1() throw(int){
    cout<<"F1 begins"<<endl;
    throw 100;
    cout<<"F1 ends"<<endl;
}


void f2() throw(int){
    cout<<"F2 begins"<<endl;
    f1();
    cout<<"F2 ends"<<endl;
}
int main()
{
    try
    {
        f2();
    }
    catch(int i)
    {
        cout<<"Got exception "<<endl;
    }
    cout<<"Bye ";     
    return 0;
}