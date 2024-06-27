#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int myarr[], int arrSize)
{
    // intializtion of intial value
    int i = 0;
    for (i; i < arrSize; i++)
    {
        cout << myarr[i] << endl;
    }
}

// note that the array during declartion the gargbage value is stored
int main()
{
    // declaration of array
    int myNum[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // printArray(myNum, 10);

    // declaration of array without passing the size of array
    int withoutArraySize[] = {223, 34, 12, 89, 13, 90, 34, 12};
    int calSizeArr = sizeof(withoutArraySize) / sizeof(withoutArraySize[0]);
    // printArray(withoutArraySize, calSizeArr);

    // declaring the same value to every element of array
    int mySameArrayElement[10] = {0};
    // printArray(mySameArrayElement,10);

    // initializtion with same value except 0 in array
    // array declaration
    int intialSameValueInArrayElement[10];
    fill(begin(intialSameValueInArrayElement), end(intialSameValueInArrayElement), 2);

    // printArray(intialSameValueInArrayElement, 10);

    // if we declare many big size of array with intial value less than other index is intialized with 0
    int initializeWithBigAndStoreLessElem[10] = {10, 20};
    printArray(initializeWithBigAndStoreLessElem,10);
    return 0;
}