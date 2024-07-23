#include <iostream>
#include <unordered_set>
using namespace std;

// fucntion fro find dulicate (My Approach)
// int findDuplicate(int myArr[], int size)
// {
//     unordered_set<int> mySet;
//     for (int i = 0; i < size; i++)
//     {
//         if (!mySet.insert(myArr[i]).second)
//         {
//             return myArr[i];
//         }
//     }
// }

// opptimized approach
int findDuplicate(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ arr[i];
        cout << sum << endl;
    }
    cout << "The Values Of Sum External Is : " << sum<<endl;
    for (int i = 0; i < n; i++)
    {
        sum = sum ^ i;
        cout<<sum<<endl;
    }
    return sum;
}

int main()
{
    int myArr[7] = {6, 3, 1, 5, 4, 3, 2};
    int num = findDuplicate(myArr, 7);
    cout << num << endl;
    return 0;
}