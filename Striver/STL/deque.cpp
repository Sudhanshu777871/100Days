// DEQUE IS SIMILAR TO VECTOR AND LIST

#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int> dq;
// inserting from back
dq.push_back(20);
dq.emplace_back(50);


// inserting from front
dq.push_front(10);
dq.emplace_front(90);

// removing from back and front
dq.pop_back();
dq.pop_front();

// AND REMAINING WILL BE SIMILAR TO LISIT AND VECTOR
    return 0;
}