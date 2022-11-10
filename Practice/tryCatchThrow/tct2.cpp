#include <iostream>
using namespace std;
int main()
{
    double x, y;
    cin >> x >> y;
    try
    {
        if (x == 0.0)
        {
            throw 0;
        }
        if (y == 0)
        {
            throw string("Y is zero");
        }
        if (x + y < 0.0)
        {
            throw(x + y);
        }
        cout << "Sum is: " << float(x / y)<<endl;
    }
    catch (int error1)
    {
        cout << error1 << endl;
    }
    catch (string &error2)
    {
        cout << error2 << endl;
    }
    catch (...)
    {
        cout << "x+y is less than 0" << endl;
    }
    cout << "BYE" << endl;
    return 0;
}