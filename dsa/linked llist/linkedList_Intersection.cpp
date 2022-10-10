#include<iostream>
using namespace std;
struct node{
    int data;
    struct node * next;
};
int main(){
    // cout<<"hello";
    struct node * first;
    struct node * second;
    struct node * third;

    first = (struct node *) malloc(sizeof(struct node));
    second = (struct node *) malloc(sizeof(struct node));
    third = (struct node *) malloc(sizeof(struct node));

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;




    
    struct node * ptr = first;

        while(ptr != NULL){
            cout<<ptr->data<<" ";
            ptr = ptr->next;
        }
    

    return 0;
}