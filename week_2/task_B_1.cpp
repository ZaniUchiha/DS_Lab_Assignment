#include <iostream>
using namespace std;

// Node class represents an element in the singly linked list
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

// list class manages the singly linked list
class list{
    Node* head;
    Node* tail;
    public:
    list(){
        head = NULL;
        tail = NULL;
    }

    // Adds a new node with value 'val' at the front of the list
    void push_front(int val){
        Node* newNode = new Node(val);
        if (head ==NULL)
        {
            head  = tail = newNode;
        }
        else{
            newNode->next = head;
            head  = newNode;
        }
    }

    // Adds a new node with value 'val' at the end of the list
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head ==NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail-> next = newNode;
            tail = newNode;
        }
        
    }

    // Prints all elements in the list
    void  print(){
        Node* temp = head;
        while (temp != NULL)
        {
            cout<<temp->data<<"->";
            temp =  temp->next;
        }
        cout<<"NULL"<<endl;
    }

    // Removes the node at the front of the list
    void pop_front(){
        if (head ==NULL)
        {
            cout<<"list is empty"<<endl;
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        
    }

    // Removes the node at the end of the list
    void pop_back(){
        if (head ==NULL){
            cout<<"list is empty"<<endl;
            return;
        }else{
        Node* temp = head;
        while (temp->next != tail)
        {
            temp  = temp-> next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }
        }

    // Inserts a new node with value 'val' at position 'pos'
    void insert(int val, int pos){
        if (pos< 0){
            cout<<"invalid position"<<endl;
            return;
        }
        if (pos == 0)
        {
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i =0; i<pos-1; i++){
            if (temp==NULL)
            {
                cout<<"Invalid position"<<endl;
                return;
            }
            
            temp = temp->next;
                }
                newNode->next = temp->next;
                temp->next = newNode;
    }

    // Searches for a node with value 'key' and returns its index, or -1 if not found
    int search(int key){
        Node* temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                // cout<<index<<endl;
                return index;
            }
            temp = temp->next;
            index++;            
        }
        return -1;
    }
};

int main(){
    // Demonstrates usage of list
    list l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.insert(4,0);
    l.print();
    cout<<l.search(2)<<endl;
    return 0;
}