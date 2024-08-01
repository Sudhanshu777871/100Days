// MAP IS TYPE OF DATA STRUCTURE THAT STORES THE DATA IS KEY VALUE PAIRS
// KEY MUST BE UNIQUE AND SORTED
// MAP IS USED WHEN WE NEED TO STORE THE DATA IN KEY VALUE PAIR

// MAP WORKS ON log(N)

// ALL THE OTHER METHODS LIKE SIZE(), BEGIN(), END(), EMPTY() IS SAME AS VECTOR AND SETS

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> myMap; // declaration of map
    // inserting the value at map
    myMap.insert({1, 12});
    myMap.emplace(2, 13);
    myMap[3] = 14;

    // now printing them
    for (auto showVal : myMap)
    {
        cout << showVal.first << " " << showVal.second << endl;
    }

    // ANOTHER WAY OF DECLARING MAP KEY - VALUE PAIRS
    map<pair<int, int>, int> secondMapMethod;
    secondMapMethod.insert({{12, 23}, 45});
    // now looping the value
    for (auto showVal : secondMapMethod)
    {
        cout << "The Value Of Second Method Is : " << showVal.first.first << " " << showVal.second << endl;
    }

    // FIDING VALUE USING KEY
    myMap.find(1); // if they do not find the 1 then it points to after the map
    
    return 0;
}

// IN THE SAME WAY THERE IS A MULTI MAP IN WHICH DUPLICATE KEYS COME BUT IN SORTED

// IN THIS WAY THERE IS UNORDERED MAP IN WHICH THE KEY IN UNORDER MEANS NOT SORTED FORM BUT CONTAINES UNIQUE KEYS AND THEY WORKS UPON 0(1) AND IN ONE IN BLUE 0{N}
 

