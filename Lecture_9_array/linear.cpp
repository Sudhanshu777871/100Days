#include <iostream>
using namespace std;
bool searchElementWithLinear(int myArr[], int size, int searchElemnt)
{
    size = size - 1;
    while (size >= 0)
    {
        if (myArr[size] == searchElemnt)
        {
            return true;
        }
        size--;
    }
    return false;
};
int main()
{
    int myArr[10] = {12, 34, 56, 77, 89, 10, 23, 44, 54, 11};
    if (searchElementWithLinear(myArr, 10, 12))
    {
        cout << "The Elemnt Is Found" << endl;
    }
    else
    {
        cout << "The Element Is Not Found" << endl;
    }

    return 0;
}