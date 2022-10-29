#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> v{10,20,30,40,50}; 

    for(auto &x : v){
        x = x + 5;
    }   

    for(auto x : v){
        cout<<x<<" ";
    }
    return 0;
}