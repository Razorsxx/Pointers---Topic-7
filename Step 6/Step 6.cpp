#include <iostream>
using namespace std;

void addOne(int* n)
{
    *n += 1;
}

int main()
{
    int x = 5;
    int* p1 = &x;

    cout << x << endl;

    addOne(p1);

    cout << x << endl;

}

