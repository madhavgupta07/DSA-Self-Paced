#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector <string> v{"MAdhav gupta", "MAni kumar", "pratik kumar"};
    for(auto &x: v){
        cout<<x<<" ";
    }      
    return 0;
}