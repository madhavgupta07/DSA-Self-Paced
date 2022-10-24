#include<iostream>
using namespace std;

int lcm(int a, int b){
    int ans = max(a, b);
    int flag = 1;
    while (flag)
    {
        if(ans % a == 0 && ans % b == 0){
            flag = 0;
            return ans;
        }
        else{
            ans++;
        }
    }
    return ans;
}

int main()
{
     cout<<lcm(12, 15);    
    return 0;
}