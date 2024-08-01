#include <iostream>
using namespace std;
int sumArr(int myArr[], int size)
{
    int sum = 0;
    size = size - 1;
    while (size >= 0)
    {
        sum += myArr[size];
        size--;
    }
    return sum;
}

int main()
{
    int elemnetNum, i = 0;
    cout << "Enter The No Of Array Element below " << endl;
    cin >> elemnetNum;
    int myArr[elemnetNum];
    while (i < elemnetNum)
    {
        cin >> myArr[i];
        i++;
    }
    cout << "The Sum Of Array Is : " << sumArr(myArr, elemnetNum);
    return 0;
}