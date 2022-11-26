#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swapByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 4;
    int b = 5;
    cout << "Values of a and b before swapping " << a << " and " << b << endl;
    swap(&a, &b);
    // swapByReference(a, b);
    cout << "Values of a and b after swapping " << a << " and " << b << endl;
}