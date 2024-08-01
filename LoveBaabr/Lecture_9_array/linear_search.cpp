#include <iostream>
using namespace std;
int searchElementWithLinear(int myArr[], int size, int searchElemnt)
{
    size = size - 1;
    while (size >= 0)
    {
        if (myArr[size] == searchElemnt)
        {
            return size;
        }
        size--;
    }
    return -1;
};
int main()
{

    int myArr[10] = {12, 34, 56, 77, 89, 10, 23, 44, 54, 11};
    int result = searchElementWithLinear(myArr, 10, 56);
    cout << result << endl;
    if (result !=-1)
    {
        cout << "The Elemnt Is Found At " << result << endl;
    }
    else
    {
        cout << "The Element Is Not Found" << endl;
    }

    return 0;
}