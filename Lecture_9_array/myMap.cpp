#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string, int> myMap; // intialization on variable
    myMap["Age"] = 19;
    myMap["AddressCode"] = 226010;
    myMap["Phone"] = 81158;

    // accessing the map value
    cout << myMap["Phone"]<<endl;

    // another way for inserting the value
    myMap.insert(make_pair("percentile", 89));

    // accessing
    cout << myMap["percentile"];
    return 0;
}