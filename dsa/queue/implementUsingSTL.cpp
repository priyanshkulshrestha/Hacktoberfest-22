#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    int n,a;
    cout<<"Enter no of elements want to enter: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        q.push(a);
    }
    cout<<"Front "<<q.front()<<endl;
    cout<<"back "<<q.back()<<endl;
    cout<<"Size "<< q.size()<<endl;
    for(int i=0;i<q.size();i++){
        q.pop();
    }
    q.pop();
}