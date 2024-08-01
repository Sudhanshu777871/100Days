#include <bits/stdc++.h>
using namespace std;

int main()
{

    // THIS IS FOR ARRAY
    // int myArr[] = {12, 11, 56, 32, 99, 1, 45};
    // sort(myArr, myArr + 7);

    // for (auto showVal : myArr)
    // {
    //     cout << showVal << " ";
    // }

    // THIS IS FOR VECTOR
    vector<int> myvector;
    myvector.push_back(34);
    myvector.push_back(6);
    myvector.push_back(78);
    myvector.push_back(90);
    myvector.push_back(1);

    // code for short them
    sort(myvector.begin(), myvector.end());
    // PRINTING THEM
    for (auto showVal : myvector)
    {
        cout << showVal << " ";
    }
    cout << endl;
    // IF WE WANT TO SORT ELMENT AT PARTICULAR LOCATION NOT FROM STATING TO END THEM WE PASS THE INDEX FROM WHERE WE WANT TO SORT AND WHERE END WE SORT VALUE

    // EXAMPLE - SORT(START, END)

    // SORT DATA IN DESCENDING ORDER
    cout << "SORT THE DATA IN DESCENDING ORDER : " << endl;
    sort(myvector.begin(), myvector.end(), greater<int>());

    for (auto showDataAfterDesc : myvector)
    {
        cout << showDataAfterDesc << " ";
    }
    cout << endl;
    return 0;
}