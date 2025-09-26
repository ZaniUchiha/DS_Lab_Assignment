#include <iostream>
using namespace std;
void leaks()
{ // function that leaks memory every time it is called
    int *data = new int[100];

    // we are not deleting data here so memory is leaked
}
void fixed()
{ // function that does not leak memory every time it is called
    int *data = new int[100];
    delete[] data; // deallocate memory of data to avoid memory leak
}
int main()
{
    // call leaks function 10000 times to see memory leak in action
    for (int i = 0; i < 10000; i++)
    {
        leaks();
    }
    cout << "leaks loop done (memory wasted)" << endl;
    // call fixed function 10000 times to see no memory leak in action
    for (int i = 0; i < 10000; i++)
    {
        fixed();
    }
    cout << "fixed loop done (no memory wasted)" << endl;
    return 0;
}