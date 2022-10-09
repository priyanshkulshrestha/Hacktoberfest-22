#include<bits/stdc++.h>
using namespace std;
class Stack{
    public:
    //properties or variables
    int *arr;
    int top;
    int size;
    //behaviours or functions
    Stack (int size){
        this->size = size;
        arr = new int [size];
        top = -1;
    }

    void push(int value){
        if(size - top> 1){
            top++;
            arr[top] = value;
        }
        else{
            cout<<"STACK OVERFLOW: stack is full";
        }
    }

    int pop(){
        if(top >= 0){
            int x =  arr[top];
            top --;
            return x;
        }
        else{
            cout<<"Stack is empty";
            return -1;
        }
    }

    int peek(){
        if(top>= 0)
            return arr[top];
        else{
            cout<<"Stack is empty.";
            return -1;
        }
    }

    int empty(){
        if(top >= 0)
            return 0;
        else
            return 1;
    }
};
int main(){
    Stack s(10);
    int flag, num;
    cout<<"Want to insert element in stack \n PRESS 1 for yes 0 for no: ";
    cin>>flag;
    while(flag){
        if(flag){
            cout<<"enter value to insert: ";
            cin>>num;
            s.push(num);
        }
        cout<<"PRESS 1 to insert a number to stack ELSE 0: ";
        cin>>flag;
    }
    cout<<"Poping element: "<<s.pop();
    if(s.empty())
        cout<<"Stack is empty";
    else
        cout<<"Top of stack: "<<s.peek();

}