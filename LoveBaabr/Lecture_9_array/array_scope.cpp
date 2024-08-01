#include <iostream>
using namespace std;

// must be remember that when we pass array in function then array first element address is passed due to this we if modified the value of array in funtion then actual array is modified but in variable it is passed by value so actaul variable is not modified

void myupdate(int myArr[], int mysize)
{
    cout << "Entering In Fuc" << endl;
    myArr[0] = 230;
    for (int i = 0; i < mysize; i++)
    {
        cout << myArr[i]<<" ";
    }

    cout << "\nLeave Fuc" << endl;
}

void normalPrint(int myArr[], int mysize)
{
   for (int i = 0; i < mysize; i++)
    {
        cout << myArr[i]<<" ";
    }
}


int main()
{
    int myArr[10] = {23, 45, 67, 11, 33, 22, 88, 90, 45, 67};
    myupdate(myArr, 10);
    normalPrint(myArr, 10);
    return 0;
}