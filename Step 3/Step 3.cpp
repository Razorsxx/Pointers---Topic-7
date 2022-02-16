// Step 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int theInt = 0;
	int* pointer1 = &theInt;
	int* pointer2 = &theInt;

	*pointer1 += 5;
	*pointer2 += 3;

	cout << theInt << endl;
}
