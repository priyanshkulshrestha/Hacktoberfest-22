#include<bits/stdc++.h>

using namespace std;

template <typename t>
class Node{
    public:
    t data;
    Node<t> * next;
     
    Node(t data){
        this->data = data;
        this->next = NULL;
    }

};

template<typename t>
class linkedlist{
    public:
    int length;
    Node<t>* head;

    linkedlist(){
        head = NULL;
        length =0;
    }
    void insert_at_start(t data){
    Node<t>* ptr = new Node<t> (data);

        if(head == NULL){
            head = ptr;
        }


        else{
        ptr->next = head;
        v       head = ptr;
        }
        length++;
    }

    int size(){
        return length;
    }

    void insert_at_end(t data){
    
        Node<t>* ptr = new Node<t> (data);
        if(head == NULL)
        head = ptr;

        else{
            Node<t>* temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = ptr;
            ptr = temp;
            
        }
        length++;
    }


    void insert_at_k(t data, int k){

        if(k > length +1){
            cout<<"not enough elements for this position";
        }
        else if(k == 1){
            insert_at_start(data);
        }
        else{
            Node<t>* ptr = new Node<t> (data);
            Node<t>* temp = head;
            int pos = 1;
            while(pos != k-1){
                temp = temp -> next;
                pos++;
            }

            ptr->next = temp->next;
            temp->next = ptr;
            ptr->data = data; 
            length ++;
        }
        length++;
    }


    t delete_at_end(){
        t deleted_data =NULL;
        if(head==NULL)
            cout<<"nothing to delete";

        else if(head -> next == NULL){
            deleted_data = head->data;

            delete (head);
            head = NULL;
        }

        else{
            Node<t>* temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            deleted_data = temp->next->data;
            delete(temp->next);
            temp->next = NULL;
        }
        length--;
        return deleted_data;
    }



    t delete_at_head(){
        t deleted_data = NULL;
        if(head == NULL){
            cout<<"nothing to delete";
        }
        else if(head -> next == NULL){
            deleted_data = head->data;

            delete (head);
            head = NULL;
        }
        else{
            Node<t>* temp = head;
            head = head->next;
            deleted_data = temp->data;
            delete temp; 
        }
        length--;
        return deleted_data;
    }


    void display(){
        Node<t>* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<"\n";
    }

};


int main(){
    linkedlist<int> ll;
    ll.insert_at_start(8);
    ll.insert_at_start(9);
    ll.insert_at_end(3);
    ll.display();
    ll.insert_at_k(6,2);
    ll.display();
    ll.insert_at_k(16,4);
    ll.display();

    ll.insert_at_k(06,6);
    ll.display();

    ll.insert_at_k(90,1);
    ll.display();

    // ll.insert_at_k(990,0);
    // ll.delete_at_end();
    // cout<< ll.delete_at_end();
    // ll.delete_at_head();
    ll.display();
    // ll.delete_at_head();
    // ll.display();
    // ll.delete_at_head();
    // ll.display();
}