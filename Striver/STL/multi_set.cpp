// EVERYTHING IS SAME AS SET
//  ONLY STORES DUPLICTAE ELEMENTS ALSO
// IT MAINTAINS TREE STRUCTURE

#include <iostream>
#include <set>
using namespace std;

int main()
{
    multiset<int> ms;

    ms.insert(49);
    ms.insert(49);
    ms.insert(49);
    ms.insert(10);
    ms.emplace(50);
    ms.emplace(50);
    ms.emplace(50);
    ms.insert(77);

    // pritning all the duplicates element
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    ms.erase(49); // erase all 49 elements
    cout << "After erasing 49" << endl;
    for (auto it : ms)
    {
        cout << it << " ";
    };

    // count number of duplicate value
    cout << "Number Of 50 In Multi-Set Is : " << ms.count(50) << endl;

    // ANOTHER ALL METHOD IS SAME AS VECTOR, SET
    return 0;
}