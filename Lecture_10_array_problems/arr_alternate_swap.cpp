// swaping the value of array in alternate way, Here is example - 
// I/O ------>>>> int myArr[5]={1,2,7,8,5};
// O/P ----->>>>> int myArr[5]={2,1,8,7,5};
// Question URl ------>>>> https://www.youtube.com/watch?v=oVa8DfUDKTw&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=10&t=88s

#include <iostream>
#include<algorithm>
using namespace std;

// my fucntion
void alternateSwap(int myArr[], int mySize)
{
    int start = 0;
    int end = 1;
    int mid = mySize / 2;
    while (mid >= 1)
    {
        swap(myArr[start], myArr[end]);
        start += 2;
        end += 2;
        mid--;
    }
}

// love baabar function
void loveBaarFun(int myArr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(myArr[i], myArr[i + 1]);
        }
    }
}

// solving this problems using while loop
void solveProblemUsingWhileLoop(int myArr[], int size)
{
    int start = 0;
    int end = 1;
    while (start + 1 < size)
    {
        int temp = myArr[start];
        myArr[start] = myArr[end];
        myArr[end] = temp;
        start += 2;
        end += 2;
    }
}

// function for printing the array
void printArr(int arr[], int size)
{
    cout<< "\nThe Value Swap After Alternate Swap Is : " << endl;
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }
}
int main()
{
    int myArrEven[6] = {2, 3, 4, 6, 5,6}; // for even
    // alternateSwap(myArrEven, 6);
    // printArr(myArrEven, 6);

    // calling love babbar method
    //loveBaarFun(myArrEven, 5);
    // printArr(myArrEven, 5);

    // calling with while loop method solution
    solveProblemUsingWhileLoop(myArrEven, 6);
    printArr(myArrEven,6);

    int myArrOdd[5] = {2,3,4,6,5}; // for even
    // alternateSwap(myArrOdd, 5);
    // printArr(myArrOdd, 5);

        // calling with while loop method solution
    solveProblemUsingWhileLoop(myArrOdd, 5);
    printArr(myArrOdd,5);
    return 0;
}