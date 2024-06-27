#include <iostream>
using namespace std;

int max(int myArr[], int size)
{

    int maxNum = myArr[0]; // also used INT_MIN which is most least value in c++
    while (size >= 0)
    {
        // using predefined max method
        //  maxNum= max(maxNum, myArr[size]);
        if (maxNum < myArr[size])
        {
            maxNum = myArr[size];
        }
        size--;
    }
    return maxNum;
}

int min(int myArr[], int size)
{
    int minNum = myArr[0]; // also used INT_MAX which is most max value in c++
    while (size >= 0)
    {
        // also used pre-defined min method
        // minNum = min(minNum, myArr[size]);
        if (minNum > myArr[size])
        {
            minNum = myArr[size];
        }

        size--;
    }
    return minNum;
}
int main()
{
    int myArr[] = {12, 34, 54, 1, 22, 89, 56, 23, 268, 0, -89};
    int arrSize = sizeof(myArr) / sizeof(myArr[0]);
    // finding max num
    cout << "Max Element In Array Is : " << max(myArr, arrSize) << endl;
    // finding min num
    min(myArr, arrSize);
    cout << "Min Element In Array Is : " << min(myArr, arrSize) << endl;
    return 0;
}