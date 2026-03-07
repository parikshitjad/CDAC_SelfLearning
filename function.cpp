#include<iostream>
using namespace std;

// function declaration
void sum(int &x, int &y);

int main()
{
    int a = 100, b = 200;

    cout<<"Before calling function: "<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;

    // function call
    sum(a, b);

    cout<<"After calling function: "<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;

    return 0;
}

void sum(int &x, int &y)
{
    x=x+y;
    cout<<"Sum = "<<x<<endl;
}
