#include <iostream>
using namespace std;


// in this solution we used XOR(^) which makes zero when same value occurs
int findUniqueElement(int myArr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {

        ans = ans ^ myArr[i];
        cout<<ans<<" ";
    }
    return ans;
}

int main()
{
    int myArr[9] = {2, 3, 1, 6, 3, 6, 2,1,10};
    cout << "The Unique Number In Array is : " << findUniqueElement(myArr, 9);
    return 0;
}