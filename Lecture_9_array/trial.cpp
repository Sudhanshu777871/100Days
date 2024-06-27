#include <iostream>
using namespace std;

int updateVar(int num)
{
    num = num + 10;
    return num;
};
int main()
{
    // cgecking varibales are passed by value not by reference
    int myNum = 20;
    cout << updateVar(myNum)<<endl;
    cout << myNum << endl;
    return 0;
}