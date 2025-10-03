#include <iostream> 
using namespace std;

// Node class for linked list
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

int main(){
    cout << "___ TASK 3 Demonstration ___" << endl; // Print header
    StackList stack; // Create stack object

    // Push values onto the stack
    for (int i = 1; i < 4; i++)
    {
        stack.push(i * 100);
    }

    stack.print(); // Print the stack

    // Pop the top value and print it
    cout << "Popped value: " << stack.pop() << endl;

    return 0; // End of program
}