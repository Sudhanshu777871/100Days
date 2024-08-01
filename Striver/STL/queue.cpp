 // THE QUEUE WORKS UPON FIFO PRINCIPAL

// AND OTHER METHOD IS SIMILAR TO STACK
// THE QUEUE ALSO TAKES 0(1) CONSTANT TIME FOR ALL OPERATIONS


#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.front()<<endl; // prints 1

    q.pop();// removes 1
    cout<<"Know The Front Number is Chnaged : "<< q.front()<<endl; // prints 2
    return 0;
}