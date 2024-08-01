// vector is dynamic array when we do not know about size of array then we used vector

// vector maints single linked list while list which is similar to vector but onely differnec is that they perform front opertaions and they maintenes doubly linked list

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.emplace_back(20); // emplace_back is faster then push_back

    vector<pair<int, int>> myVector;
    myVector.push_back({34, 45});
    myVector.emplace_back(78, 90); // emplace_back syntax is differenet from push_back() in terms of inserting elements in pair

    vector<int> myV(5, 100); // this creates 5 array and put by default 100 values

    vector<int> myDefaultV; // this creates 5 size array with 0 or either garbage value according to comiler

    vector<int> copyV(myV); // this vector copies the myV vector data

    // CODE FOR PRINTING THE VECTOR
    vector<int> skVector = {23, 45, 12, 34, 67};

    vector<int>::iterator showData = skVector.begin(); // this is store the first element address of vector skVector
    cout << *(showData) << endl;                       // this will print the value of first element of skVector

    showData++; // going to next address of vector
    cout << *(showData) << endl;

    showData += 2; // going to next 2 element vector address
    cout << *(showData) << endl;

    // how to find end value of vector
    showData = skVector.end(); // this will store the last element address of vector skVector

    showData--; // the end() iterator get the address after last element so must be one decrement so they accessd the last element //////////(REMEMEBER)/////

    cout << "This will Print last Element Of Vector skVector " << *(showData) << endl;

    // PRINTING THE VECTOR FROM START TO END USING LOOP
    cout << "Prinitng Entire Array With Loop" << endl;
    for (vector<int>::iterator it = skVector.begin(); it != skVector.end(); it++)
    {
        cout << *(it) << " ";
    }

    cout << endl;
    // PRINING ENTIRE VECTOR USING auto
    cout << "PRINING VECTOR USING 'AUTO'" << endl;
    for (auto it = skVector.begin(); it != skVector.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // ANOTHER WAY OF PRINT VECTOR
    cout << "Printing The Vector Using For Each Loop " << endl;
    for (auto it : skVector)
    { // this is foreach loop used
        cout << it << " ";
    }
    cout << endl;

    // HOW TO ERASE VECTOR
    vector<int> newVectro = {23, 89, 90, 56,96,67,11,44,99,788,900,100,200,300,400,800,600};
    newVectro.erase(newVectro.begin() + 1); // this will erase 89 from vector newVector

    cout<<"Vector After Erase Elemnet at Index 1 : " << newVectro[1]<<endl;

    // erase vector with more than 1 elments
    newVectro.erase(newVectro.begin()+1, newVectro.begin()+2);

// HOW TO INSERT ELEMENT IN VECTOR AT PARTICULAR INDEX
newVectro.insert(newVectro.begin() + 1, 1000); // this will insert the 1000 at index 1

newVectro.insert(newVectro.begin()+1,2,30);// this will insert two times 30 right after 1 index in vector here in 2 means we want insert two items and which is 30


// HOW TO FIND SIZE OF VECTOR
newVectro.size();
// HOW TO CLEAR ENTIRE VECTOR
newVectro.clear();
// HOW TO SWAP TWO VECTOR
// Syntax - oneVector.swap(secondVector);

// HOW TO FIND VECTOR IS EMPTY OR NOT
newVectro.empty(); // returns true if it is empty otherwise false

    return 0;
}