#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }    
};

Node* buildTree(Node* root){
    
    // cout<<"Enter data for the node:";
    int x;
    cin>>x;
    root = new Node(x);

    if(x == -1){
        return NULL;
    }

    cout<<"Enter data for left node of "<< x<<" :";
    root->left = buildTree(root->left);
    cout<<"Enter data for right node of "<< x<<" :";
    root->right = buildTree(root->right);

    return root;
}

void levelOrderTraversal(Node* root){
    cout<<"LEVEL ORDER TRAVERSAL : "<<endl;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
    }
}

void reverseLevelOrderTraversal(Node* root){
    cout<<"REVERSE LEVEL ORDER TRAVERSAL : "<<endl;
    queue<Node*> q;
    stack<Node*> s;

    q.push(root);
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();
        s.push(temp);

        if(temp->right != NULL){
            q.push(temp->right);
        }
        
        if(temp->left != NULL){
            q.push(temp->left);
        }

    }

    while(!s.empty()){
        Node* temp = s.top();
        cout<<temp->data<<" ";
        s.pop();
    }

}

void inorderTraversal(Node* root){
    stack<Node*> s;
    while(!s.empty() || root!=NULL){
        if(root){
            s.push(root);
            root = root->left;

        }
        else{
            root = s.top();
            s.pop();
            cout<<root->data<<" ";
            root = root->right;
        }
    }
}

void preorderTraversal(Node* root){
   stack<Node*> s;
    while(!s.empty() || root!=NULL){

        
        if(root){
            cout<<root->data<<" ";
            s.push(root);
            root = root->left;

        }
        else{
            root = s.top();
            s.pop();
            root = root->right;
        }
    }
}

void postorderTraversal(Node* root){
    stack<Node*> s;
    s.push(root);

    stack<Node*> out;

    while(!s.empty()){
        Node* curr = s.top();
        out.push(s.top());
        s.pop();

        if(curr->left)
            s.push(curr->left);
        if(curr->right)
            s.push(curr->right);
    }

    while(!out.empty()){
        cout<<out.top()->data<<" ";
        out.pop();
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    Node* root = NULL;

    cout<<"Enter data for the root node :";
    root = buildTree(root);

    cout<<endl;
    levelOrderTraversal(root);

    cout<<endl;
    reverseLevelOrderTraversal(root);

    cout<<endl;
    cout<<"INORDER TRAVERSAL : "<<endl;
    inorderTraversal(root);

    cout<<endl;
    cout<<"PREORDER TRAVERSAL : "<<endl;
    preorderTraversal(root);
    cout<<endl;

    cout<<"POSTORDER TRAVERSAL : "<<endl;
    postorderTraversal(root);
    return 0;
}