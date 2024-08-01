// THE PRIORITY QUEUE AS NAME SUGGEST THEY INSERT DATA IN DESCENDING ORDER BY DEFAULT AND THEY MAINTAINS TREE FOR MANAGING THE DATA

// DUE TO HIS PRICIPAL IN DECREMENT ORDER OF ELEMENT IT IS KNOWN AS MAX HEAP

// THE PRIORITY HEAP COUDL ALSO INSERT DATA IN INCREMENT ORDER AND DUE TO THIS THEY KNOWN AS MIN HEAP

// THE PRIORITY QUEUE IS USED IN MANY ALGORITHMS LIKE DIJKSTRA'S ALGORITHM

// MAINLY OPEARIONS LIKE - PUSH(),POP(),TOP(), SIZE(), EMPTY()

// TIME COMPLEXITY -
// PUSH() - O(log n)
// POP() - O(log n)
// TOP() - O(1)
// SIZE() - O(1)
// EMPTY() - O(1)

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(50);
    pq.push(100);
    pq.push(20);
    pq.emplace(70);

    cout << "Element at Top : " << pq.top() << endl; // gives 100 becuase of priority
    pq.pop();
    cout << "Element at Top After POP() Opearation : " << pq.top()<<endl; // gives 70 becuase of
    // ABOVE CODE IS MAX HEAP

    // NOW CODE FOR MIX HEAP
    priority_queue<int, vector<int>, greater<int>> mq;
    mq.push(50);
    mq.push(100);
    mq.push(20);
    mq.push(70);
    mq.emplace(10);

    cout << mq.top() << endl; // gives 10 becuase for MIN HEAP
    return 0;
}