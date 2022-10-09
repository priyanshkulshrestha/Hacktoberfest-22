// { Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

*/

Node* reversed(Node*head){
    Node*temp = head;
    Node*prev=nullptr;
    while(temp!=nullptr){
        Node*a = temp->next;
        temp->next = prev;
        prev = temp;
        temp =a;
    }
    return prev;
}

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* list1, struct Node* list2)
    {
        // code here
        Node* temp1= reversed(list1);
       Node* temp2= reversed(list2);
       
        Node*head1=nullptr;
   Node*curr=nullptr;
   
 
  int sum=0,carry=0,num=0;
   while(temp1!=nullptr || temp2!=nullptr){
     num=0;
      if(temp1){
          num+= temp1->data;
          temp1=temp1->next;
      }
       
       if(temp2){
          num+= temp2->data;
          temp2=temp2->next;
      }
       num+=carry;
       sum=num%10;
       carry=num/10;
       
       
      
      
       Node* a= new Node(sum);
        if(head1==nullptr){
            head1=a;
            curr=head1;
        }
       else{
           
           curr->next=a;
           curr=curr->next;
       }
       
       
   }
   if(carry!=0){    //edge case
        Node* a= new Node(carry);
       curr->next=a;
       curr=curr->next;
   }
   Node*addition = reversed(head1);
   return addition;
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends