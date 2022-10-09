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

// void levelOrderTraversal(Node* root){
//     cout<<"LEVEL ORDER TRAVERSAL : "<<endl;
//     queue<Node*> q;
//     q.push(root);

//     while (!q.empty())
//     {
//         Node* temp = q.front();
//         cout<<temp->data<<" ";
//         q.pop();
        

//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
        
//     }
    
// }

// *****************************************
// LEVEL ORDER WITH LEVELS AND SEPRATE LINES
// *****************************************
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<"\n";
            if(!q.empty())
            q.push(NULL);
        }
        else{
            cout<<temp->data<<" ";
   
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
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
    if(root != NULL){
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }  
}

void preorderTraversal(Node* root){
    if(root != NULL){
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }  
}
void postorderTraversal(Node* root){
    if(root != NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
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
    cout<<"LEVEL ORDER TRAVERSAL : "<<endl;
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