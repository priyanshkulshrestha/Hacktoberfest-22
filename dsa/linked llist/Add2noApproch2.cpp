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

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/



class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* list1, struct Node* list2)
    {
   int num1=0, num2=0;
   while(list1){
      num1 = num1*10 + list1->data;
      list1 = list1->next;
   }
   while(list2){
      num2 = num2*10 + list2->data;
      list2 = list2->next;
   }
   long long int sum=num1+num2;
   Node* res = new Node();
   Node* head = new Node();
   int ele = sum%10;
   res->data = ele;
   res->next = NULL;
   head=res;
   sum=sum/10;
   while(sum!=0){
    //    Node* res = new Node();
       int ele = sum%10;
       res->data = ele;
       res->next = head;
       head = res;
       sum = sum/10;
   }
   return head;
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