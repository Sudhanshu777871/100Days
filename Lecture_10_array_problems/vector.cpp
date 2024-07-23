#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    // code for pushing items in vector
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    // code for getting size of vector
    cout << "The Size of Vector Is : " <<v.size() << endl;

    // modified the value in vector at index 3
    v[2] = 1000;
    // code for display items
    for (int i = 0; i < 10; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}