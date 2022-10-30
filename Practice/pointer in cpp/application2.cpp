#include<iostream>
#include "vector"
using namespace std;

void processVector(vector<int> *v){
    for (auto x: *v)
    {
        cout<<x<<" ";
    }
    
}
int main()
{
    vector<int> v;
    for (int i = 0; i < 100; i++)
    {
        v.push_back(i);
    }
    processVector(&v);
    return 0;
}