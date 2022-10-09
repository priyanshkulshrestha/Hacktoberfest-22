#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag=1,num,size;
    stack<int> s;
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
    if(s.empty())
        cout<<"Stack is empty";
    else
        cout<<"Top of stack: "<<s.top();
    // printstack(s);
    return 0;
}