// SET CONTAINS DATA IN SORTED AND UNIQUE ELEMENT AND THERE TIME COMPLEXITY FOR ENTIRE OPERATIONS IS 0(logN)

// THEY MAINTAINS TREE STRUCTURE FOR MANAGING DATA
// IN THIS ALL THE OPEARIONS SAME AS VECTOR AND OTHER DATA STRUCTURE LIKE - END(), BEGIN(), RBEGIN(), REND(), SIZE(), EMPTY() & SWAP()
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(30); // not inseretd becuase 30 is already inserted and only stored unique value
    s.emplace(70);

    // find element
    auto findElement = s.find(40);
    cout << *(findElement);

    // erase element
    s.erase(20);

    // for lower and upper bound
    s.lower_bound(30);
    s.upper_bound(70);

    return 0;
}