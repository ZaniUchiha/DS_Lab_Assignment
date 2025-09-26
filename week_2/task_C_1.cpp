#include <iostream>
using namespace std; 

// Node class represents an element in the doubly linked list
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int val){
         data = val;
         next =  NULL;
         prev = NULL;
    }
};

// doublyList class manages the doubly linked list
class doublyList{
    Node* head;
    Node* tail;
    public:
    doublyList(){
        head = NULL;
        tail = NULL;
    }

    // Adds a new node with value 'val' at the front of the list
    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }        
    }

    // Adds a new node with value 'val' at the end of the list
    void push_back(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Removes the node at the front of the list
    void pop_front(){
        if (head ==NULL){
            cout<<"list is empty"<<endl;
            return;
        }else{
            Node* temp =head;
            head = head->next;
            if (head) head->prev = NULL;
            delete temp;
        }
    }

    // Removes the node at the end of the list
    void pop_back(){
        if(head == NULL){
            cout<<"list is enppty"<<endl;
            return;
        }else{
            Node* temp  = tail;
            tail =tail->prev;
            if (tail) tail->next =NULL;
            delete temp;
        }  
    }

    // Prints the list from head to tail
    void print_head(){
        Node* temp = head;
        while (temp != NULL){
            cout<<temp->data<<"<->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }

    // Prints the list from tail to head
    void print_tail(){
        Node* temp = tail;
        while (temp!=NULL)
        {
            cout<<temp->data<<"<->";
            temp = temp->prev;
        }
        
    }

    // Inserts a new node with value 'val' at position 'pos'
    void insert(int val , int pos){
        if(pos < 0){
            cout<<"invalid position"<<endl;
            return;
        }
        if(pos ==0){
            push_front(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* temp = head;
        for(int i =0; i<pos-1; i++){
            if(temp ==NULL){
                cout<<"Invalid position"<<endl;
                return;
            }
            temp =  temp->next;
        }
        if(temp == tail){
            push_back(val);
            return;
        }
        // Insertion logic for middle positions is missing
       }
};

int main(){
    // Demonstrates usage of doublyList
    doublyList dl;
    // dl.push_back(1);
    // dl.push_back(2);
    dl.push_front(1);
    dl.push_front(2);
    dl.push_back(3);
    dl.print_head();
    // dl.pop_back();
    // dl.pop_front();
    dl.print_tail();
    return 0;
}