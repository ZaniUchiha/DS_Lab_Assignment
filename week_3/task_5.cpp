#include <iostream>
using namespace std;

#define MAX_SIZE 5 // Maximum size of the stack

// Class to implement a stack using an array
class StackArray
{
private:
    int data[MAX_SIZE]; // Array to store stack elements
    int top;            // Index of the top element in the stack

public:
    StackArray()
    {
        top = -1; // Initialize stack as empty
    }

    // Function to add an element to the stack
    void push(int val)
    {
        if (top == MAX_SIZE - 1) // Check if stack is full
        {
            cout << "\nError: stackoverflow: cannot push " << val << " (Array full)" << endl;
            return; // Exit if stack is full
        }
        data[++top] = val; // Increment top and add value
        cout << "Pushed: " << val << endl;
    }

    // Function to remove and return the top element
    int pop()
    {
        if (top == -1) // Check if stack is empty
        {
            cout << "\nError: stack underflow: (stack is empty)";
            return -1; // Return -1 if stack is empty
        }
        return data[top--]; // Return top element and decrease top
    }

    // Function to see the top element without removing it
    int peek() const
    {
        if (top == -1) // If stack is empty
        {
            return -1; // Return -1
        }
        return data[top]; // Return the top element
    }

    // Function to print the stack from top to bottom
    void print() const
    {
        cout << "StackArray (TOP->BOT): [ ";
        for (int i = top; i >= 0; --i)
        {
            cout << data[i] << (i == 0 ? "" : ",");
        }
        cout << " ]" << endl;
    }
};

// Main function to demonstrate stack operations
int main()
{
    cout << "___ TASK 2 Demonstration ___" << endl;
    StackArray stack; // Create a stack object

    // Push values onto the stack
    for (int i = 1; i < 7; i++)
    {
        stack.push(i * 10); // Try to push 6 values (one more than MAX_SIZE)
    }

    // Pop the top value and print it
    cout << "Popped value: " << stack.pop() << endl;
    cout << "Peeked value: " << stack.peek() << endl;
    stack.print();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    // Print the current stack
    stack.print();

    return 0; // End of program
}