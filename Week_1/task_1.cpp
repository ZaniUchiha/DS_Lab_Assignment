#include <iostream> //include all input and output library
using namespace std;
int main()
{
    int a = 42;    // declare integer type variable named by a storing 42
    int *p = &a;   // declare pointer variable p stroing address of a ( where the value of a is stored)
    int **pp = &p; // deaclare pointer to pointer variables pp storing address of p (where the value of op is stored)
    // print values of each variables step by step
    cout << "a: " << a << endl;       // print value of a
    cout << "*p: " << *p << endl;     // print value of p
    cout << "**pp: " << **pp << endl; // print value of pp

    **pp = 100;                                 // change value os a using pp
    cout << "after **pp =100 a: " << a << endl; // print value of a after changing its value using pp
    return 0;
}