#include <iostream>
#include <set>
using namespace std;

int main()
{
    // declaration and intialization
    set<int> mySet;

    // inserting the data into set
    mySet.insert(10);
    mySet.insert(200); // the set ordered them
    mySet.insert(30);
    mySet.insert(50);
    mySet.insert(70);
    mySet.insert(100);
    mySet.insert(10); // duplicate value but they igonre them

    // itetaion
    for (set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
    // earsing the element from se
    mySet.erase(10);
    // again iterating the set
    for (set<int>::iterator it = mySet.begin(); it != mySet.end(); ++it)
    {
        cout << *it << " ";
    }
    return 0;
}