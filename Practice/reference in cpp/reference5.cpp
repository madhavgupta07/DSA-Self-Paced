#include<iostream>
using namespace std;


void update(int num){
    num++;
}
int main()
{
    int n = 9;
    cout<<"Before Update: "<< n <<endl;
    update(n);
    cout<<"After Update: "<< n << endl;     
    return 0;
}