#include <iostream>
using namespace std;


// 1st Approach
// void factors(int num)
// {
//     if (num <= 0)
//     {
//         return;
//     }
//     for (int i = 1; i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << i << " ";
//         }
//     }
// }



// 2nd Approach
// void factors(int num)
// {
//     for (int i = 1; i * i <= num; i++)
//     {
//         if (num % i == 0)
//         {
//             cout << i << " ";
//             if (i != (num/i))
//             {
//                 cout << num/i<< " ";
//             }
            
//         }
//     }
// }

// 3rd approach

void factors(int num){
    int i;
    for ( i = 1; i*i < num; i++)
    {
        if (num % i ==0)
        {
            cout << i << " ";
        }   
    }
    for ( ; i >=1; i--)
    {
        if (num % i == 0)
        {
            cout << num/i<<" ";
        }
        
    }
    
    
}
int main()
{
    factors(25);
    return 0;
}