#include<iostream>
using namespace std;

// Node class represents an element in the circular linked list
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

// CircularList class manages the circular linked list
class CircularList{
    Node* head;
    Node* tail;
    public:
    CircularList(){
        head = NULL;
        tail = NULL;
    }

    // Adds a new node with value 'val' at the front of the list
    void push_front(int val){
        Node* newNode = new Node(val);
        if (head ==NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }else{
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
        
    }

    // Prints all elements in the circular list
    void print(){
        Node* temp = head->next;
        if (head ==NULL)
        {
            cout<<"List is empty"<<endl;
            return;
        }
        cout<<head->data<<"->";
        while (temp != head)
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
        
        
    }

    // Adds a new node with value 'val' at the end of the list
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head==NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }else{
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }
        
    }
};

int main(){
    // Demonstrates usage of CircularList
    CircularList cl;
    cl.push_front(1);
    cl.push_front(2);
    cl.push_front(3);
    cl.print();
    return 0;
}