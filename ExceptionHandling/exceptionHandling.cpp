#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int b = 0;
    if (b == 0)
    {
        throw "Cannot divide by 0";
    }
    cout << a / b << endl;
    try
    {
    }
    catch (const char *message)
    {
        cout << message << endl;
    }
    return 0;
}