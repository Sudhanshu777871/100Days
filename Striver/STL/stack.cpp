// THE STACK WORKS UPON LIFO AND MAINLY THREE METHOS USED WHIC WE DAILY FREQUENTLY - PUSH(), POP(), TOP() AND OTHER ARE -  SIZE(), SWA()


// IN STACK EVERY OPERATIONS DONE IN 0(1) TIME WHICH IS CONSTANT TIME

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> myStack;

    // pusing the lement in satck
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    // now the satck contains in that order => [5,4,3,2,1] (1 is top)

    // knwoing the element at top
    cout << myStack.top(); // gives 5 becuase it is last

    // removing the element which is remove 5 becuase of LIFO
    myStack.pop();

    // knwoing is emty
    myStack.empty();

    // knowing size
    myStack.size();
    return 0;
}