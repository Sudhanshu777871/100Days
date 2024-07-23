// CODE FOR SWAPING THE VARIBALE WITHOUT THIRD VARIABLE
#include <iostream>
using namespace std;

void swapVar(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "The Value Of a Is : " << a << " The Value of  b Is : " << b << endl;
}
int main()
{
    int a = 34;
    int b = 12;
    swapVar(a, b);

    return 0;
}
