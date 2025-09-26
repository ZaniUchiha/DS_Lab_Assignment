#include <iostream>
using namespace std;
int main()
{
    int *p = new int(50); // create a dynamic integer type variable p in runtime and store value 50 in it

    cout << "Value of *p before delete: " << *p << endl; // print value of p before deleting it

    delete p;    // deallocate memory of p
    p = nullptr; // set p to null pointer to avoid dangling pointer

    if (p == nullptr)
    {
        cout << "Pointer is safetly set to nnullptr after delete" << endl;
    } // check if p is null pointer and print message

    return 0;
}