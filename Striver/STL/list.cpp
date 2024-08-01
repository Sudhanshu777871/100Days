// THE LIST IS SIMILAR TO VECTOR BUT THE ONLY DIFFERENCE IS THAT IN LIST FRONT OPERATION IS PERFORMED MEANS FROM FRON WE COULD INSERT A VALUE WHILE IN VECTOR WE COULD NOT DO THAT

// ALSO THE LIST MAINTAINS DOUBLE LINKED LIST WHILE VECTOR MAINTAINS SINGLE LINKEDLIST

// ALSO REMEBER INSERING AN ELEMENT IS COSTILER IN TERMS OF TIME TIME COMPLEXITY IN VECTOR BUT IT IS VERY CHAEP IN LIST BECAUSE THEY MAINTAINS DOUBLY LINKED LIST

#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(10);
    l.emplace_back(29);

    // insering element from front
    l.push_front(20);
    l.emplace_front(50);

    // printing the list
    for (auto printing : l)
    {
        cout << printing << " " << endl;
    }

    // AND THE REMAING METHOD WILL BE SAME AS VECTOR LIKE - SIZE(), EMPTY(), CLEAR() AND ALL OTHER THINGS
    return 0;
}
