#include <iostream>
using namespace std;

// Class to wrap a dynamic array
class ArrayWrspper
{
private:
    int *data; // Pointer to hold the dynamic array
    int size;  // Variable to store the size of the array

public:
    // Constructor: creates a dynamic array of size n
    ArrayWrspper(int n)
    {
        size = n;          // Set the size
        data = new int[n]; // Allocate memory for the array
        cout << "Dynamic ArrayWrapper creared successfully with size " << n << endl;

        // Fill the array with values (each element = i*10 + 5)
        for (int i = 0; i < size; i++)
        {
            data[i] = i * 10 + 5;
        }
    }

    // Function to get an element at a specific index
    int getElement(int index) const
    {
        // Check if index is valid
        if (index >= 0 && index < size)
        {
            return data[index]; // Return the element
        }
        return -1; // Return -1 if index is invalid
    }

    // Function to print the array
    void print() const
    {
        cout << "Wrapper Array [ ";
        for (int i = 0; i < size; i++)
        {
            // Print each element, use space or colon as separator
            cout << data[i] << (i == size - 1 ? " " : " : ");
        }
        cout << "]" << endl;
    }

    // Destructor: frees the memory when object is destroyed
    ~ArrayWrspper()
    {
        delete data;    // Free the allocated memory (should use delete[])
        data = nullptr; // Set pointer to null for safety
        cout << "ArrayWrapper memory freed safely. (destructor called)" << endl;
    }
};

int main()
{
    cout << "___ Task 1 Demonstration ___" << endl;                   // Print a header
    ArrayWrspper wrapper(4);                                          // Create an ArrayWrspper object of size 4
    wrapper.print();                                                  // Print the array
    cout << "Element at index 3 : " << wrapper.getElement(3) << endl; // Print element at index 3
    return 0;                                                         // End of program
}