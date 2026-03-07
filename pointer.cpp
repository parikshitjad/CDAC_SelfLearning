#include<iostream>
using namespace std;

void swapNumbers(int *x, int *y);

int main()
{
    int a = 10, b = 20;

    cout << "Before Swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    swapNumbers(&a, &b);

    cout << "After Swapping:" << endl;
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}

void swapNumbers(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}