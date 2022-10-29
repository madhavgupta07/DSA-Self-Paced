// Avoiding copy of large objects during function calls.

#include<iostream>
#include <vector>
using namespace std;

void print(vector<int> &v){
    for(auto x : v){
        cout << x << " ";
    }
}
int main()
{
    vector <int> v;
    for (int i = 1; i <= 50; i++)
    {
        v.push_back(i);
    }
    print(v);
    return 0;
}