#include<iostream>
using namespace std;

template<class T>
class Node{
    public:
        T data;
        Node<T>* next;
        Node(T data){
            this->data = data;
            next = NULL;
        }
};

template<class T>
class Queue{
    private:
        Node<T>* front;
        Node<T>* rear;
        int size;
    
    public:
        Queue(){
            front=NULL;
            rear=NULL;
            size=0;
        }

        void enqueue(T data){
            Node<T>* ptr = new Node<T>(data);
            if(rear==NULL && front==NULL){
                front=ptr;
                rear=ptr;
            }
            else{
                rear->next= ptr;
                rear = rear->next;
            }
            size++;
        }

        T dequeue(){
            if(rear==NULL){
                cout<<"Queue is empty!!!\n";
                return NULL;
            }
            Node<T>* temp = front;
            front = front->next;
            if(front==NULL){
                rear=NULL;
            }
            T deleted = temp->data;
            delete(temp);
            return deleted;
            size--;
        }

        T top(){
            if(front==NULL){
                cout<<"Queue is empty\n";
                return NULL;
            }
            return front->data;
        }

};

int main(){
    // Queue<string>q;
    // q.enqueue("Radha");
    // q.enqueue("garg");
    // q.enqueue("mittal");
    // cout<<q.dequeue()<<"\n";
    // cout<<q.top()<<"\n";
    Queue<int>q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.dequeue()<<"\n";
    cout<<q.top()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.dequeue()<<"\n";
    cout<<q.top()<<"\n";
    return 0;
}