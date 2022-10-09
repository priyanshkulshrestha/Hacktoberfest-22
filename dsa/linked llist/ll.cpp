#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        temp -> next = NULL; 
    }
    else{
        temp -> next = head;
        head = temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        temp -> next = NULL;
    }
    if(tail == NULL){
        tail = head;
        while (t->next != NULL)
        {
            tail = t;
            t = t -> next;
        }   
    }
    else{
        tail->next = temp;
        tail = temp;
    }

}

void traversell(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    
}

int main()
{
    //created a head
    Node* head;
    Node* tail;


    //created a new node
    Node* node1 = new Node(10);
    cout<< node1 -> data << endl;
    cout<< node1 -> next << endl;

    //head pointed to node 1
    // head = node1;

    int n,value;
    cout<<"enter no of node: ";
    cin>>n;

    while (n--)
    {
    cout<<"enter node: ";
    cin>>value;
    // insertAtHead(head,value);
    insertAtTail(head, tail, value);
    }


    traversell(head);
    return 0;
}