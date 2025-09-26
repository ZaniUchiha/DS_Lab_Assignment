#include <iostream>
using namespace std;
int main()
{
    // create an array of pointer to char type variable names storing address of string literals
    const char *names[] = {"Zayn", "itachi", "uchiha", "Zani"};
    // calculate number of elements in the array
    int n = sizeof(names) / sizeof(names[0]);
    // print all elements of array using loop
    for (int i = 0; i < n; i++)
    {
        cout << 'names[' << i << "] : " << names[i] << endl;
    }

    const char *replace = "zeno";                             // create a pointer of char type variable replace storing address of string literal "zeno"
    names[3] = replace;                                       // replace the value of names[3] by replace (remember we cannot change the value of string literal directly)
    cout << "after repacing names[3] : " << names[3] << endl; // print value of names[3] after replacing it
    return 0;
}