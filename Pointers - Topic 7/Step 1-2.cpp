// Pointers - Topic 7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

    float theFloat = 4.5f;
    float* thePointer = &theFloat;

    cout << *thePointer << endl;

    *thePointer = 14.2f;
    cout << theFloat << endl;

    theFloat = 12.5f;
    cout << theFloat << endl;
}