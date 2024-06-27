#include <iostream>
using namespace std;

// void swapArr(int myArr[], int size)
// {
//     int mid = size / 2;
//     int start = 0;
//     int end = size - 1;
//     while (mid >= 1)
//     {
//         int temp = myArr[start];
//         myArr[start] = myArr[end];
//         myArr[end] = temp;
//         start++;
//         end--;
//         mid--;
//     }
// }

// also swap using this algorithm
void swapArr(int myArr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(myArr[start], myArr[end]);
        start++;
        end--;
    }
};
void printArr(int myArr[], int size)
{
    cout << "After Swaping The Array Is : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << myArr[i] << " ";
    }
}
int main()
{
    int myArr[7] = {12, 23, 34, 45, 56, 67, 78};
    swapArr(myArr, 7); // method for swap array
    printArr(myArr, 7);
    return 0;
}