#include <iostream> // For input/output operations
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

// Node class for linked list stack
class Node{
    public:
        int data;      // To store the value
        Node* next;    // Pointer to the next node

        // Constructor to initialize node with value
        Node(int val){
            data = val;    // Set data
            next = NULL;   // Set next as null
        }
};

// Stack implemented using linked list
class StackList{
    private:
        Node* head; // Pointer to the top of the stack

    public:
        // Constructor: stack starts empty
        StackList(){
            head = NULL;
        }

        // Push a value onto the stack
        void push(int val){
            Node* newNode = new Node(val); // Create new node
            newNode->next = head;          // Link new node to current head
            head = newNode;                // Update head to new node
            cout << "pushed: " << val << endl;
        }

        // Pop the top value from the stack
        int pop(){
            if (head == NULL) // If stack is empty
            {
                cout << "STack is Empty\n";
                return -1; // Return -1 if empty
            }
            Node* temp = head;        // Temp pointer to current head
            int val = temp->data;     // Get value to return
            head = head->next;        // Move head to next node
            delete temp;              // Delete old head node
            return val;               // Return popped value
        }

        // Print the stack from top to bottom
        void print() const{
            Node* curr = head; // Start from top
            cout << "Stacklist (TOP->BOT): [ ";
            while (curr != NULL)
            {
                cout << curr->data << (curr->next == NULL ? "" : ":"); // Print value and separator
                curr = curr->next; // Move to next node
            }
            cout << " ]" << endl;
        }

        // Destructor: free all nodes when stack is destroyed
        ~StackList(){
            Node* curr = head;
            while (curr != NULL)
            {
                Node* next_node = curr->next; // Save next node
                delete curr;                  // Delete current node
                curr = next_node;             // Move to next node
            }
        }
};

// Function to demonstrate stack ADT using both implementations
void demostrateADT(StackArray & Astack , StackList& Lstack){
    cout<<"Pushing 10 and 20 into both implementation.\n";
    // use interface on array stack
    Astack.push(10); // Push 10 to array stack
    Astack.push(20); // Push 20 to array stack
    cout<<"Array stack pop: "<<Astack.pop()<<endl; // Pop from array stack and print

    // use interface on list stack
    Lstack.push(10); // Push 10 to list stack
    Lstack.push(20); // Push 20 to list stack
    cout<<"list stack pop: "<<Lstack.pop()<<endl; // Pop from list stack and print

    Astack.print(); // Print array stack
    Lstack.print(); // Print list stack
}

int main(){
    cout<<"___ TASK 4 Demonstrate ___"<<endl; // Print header
    StackArray Astack; // Create array stack object
    StackList Lstack;  // Create linked list stack object
    demostrateADT(Astack,Lstack); // Demonstrate stack operations
    return 0; // End of program
}