#include <iostream>
using namespace std;
int main()
{
    int x = 20;                        // create an integer type variable x with value 20
    int *p = &x;                       // create a poinrer variables p storing addreaa of x
    cout << "x before :" << x << endl; // print value of x before changing its vlaue using pointer
    *p = *p + 5;                       // change value of x using pointer p
    cout << "x after: " << x << endl;  // print value of x after changing its value using pointer p
    return 0;
}