#include<iostream>
using namespace std;

int main()
{
    int a=10, b=5;

    cout<<"Values: a = "<< a << " and b = "<< b << endl;

    cout<<"=====================================================";
    // Arithmetic Operators
    cout<<"\nArithmetic Operators:"<<endl;
    cout<<endl;

    cout<<"Addition: a+b = "<< a+b << endl;
    cout<<"Substraction: a-b = "<< a-b << endl;
    cout<<"Multiplication: a*b = "<< a*b << endl;
    cout<<"Division: a/b = "<< a/b << endl;
    cout<<"Modulus: a%b = "<< a%b << endl;

    cout<<"=====================================================";
    // Unary Operators
    cout<<"\nUnary Operators:"<<endl;
    cout<<endl;

    cout<<"PreIncrement: ++a = "<< ++a << endl;
    cout<<"PostIncrement: a++ = "<< a++ << endl;
    cout<<"PreDecrement: --a = "<< --a << endl;
    cout<<"PostDecrement: a-- = "<< a-- << endl;

    cout<<"=====================================================";
    // ternary Operators
    cout<<"\nTernary Operators:"<<endl;
    cout<<endl;

    cout<<"Ternary = "<< (a>b ? "a is greater than b, value = " + to_string(a)  : "b is greater than a, value = "+ to_string(b)) << endl;

    cout<<"=====================================================";
    // Assignment Operators
    cout<<"\nAssignment Operators:"<<endl;
    cout<<endl;

    int c = 90;

    cout<<"c = "<< c << endl;

    c = c + 10;
    cout<<"c = c + 10 = "<< c << endl;

    c = c - 10;
    cout<<"c = c - 10 = " << c << endl;

    c = c * 10;
    cout<<"c = c * 10 = "<< c << endl;

    c = c / 10;
    cout<<"c = c / 10 = "<< c << endl;

    return 0;   
}