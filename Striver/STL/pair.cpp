// pair is type of data which store value in pairs like <int, int>
// they come under utility library

// HERE IS EXAMPLE -

#include <iostream>
#include <utility>
using namespace std;

int main()
{
    pair<int, int> myPair = {12, 24};
    cout << myPair.first << " " << myPair.second << endl;

    // another example

    pair<int, pair<int, int>> p = {23, {45, 56}};

    cout << "First Pair Element : " << p.first << " Pair Second First Element : " << p.second.first << " Pair Second Second Element : " << p.second.second << endl;

    return 0;
}