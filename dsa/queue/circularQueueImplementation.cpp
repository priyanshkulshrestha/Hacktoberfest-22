class CircularQueue{
    int* arr;
    int qfront;
    int size;
    int rear;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        // Write your code here.
        size = n;
        rear = -1;
        qfront = -1;
//         cout<<size<<"size\n";
        arr = new int[size];
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((qfront == 0 && rear == size-1) || rear == (qfront-1)%(size-1))
            return false;
        else if(qfront == -1)
            qfront = rear = 0;
        else if(rear == size-1 && qfront!=0)
            rear = 0;
        else
            rear++;
        arr[rear] = value;
//         cout<<"front - "<<qfront<<" rear - "<<rear;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(qfront == -1){
            return -1;
        }
        int ans = arr[qfront];
        if(qfront == rear){
            cout<<"exe1";
            qfront = rear = 0;
        }
        else if(qfront == size-1){
//             cout<<"exe2";
            qfront =0;}
        else{
//             cout<<"increased";
            qfront++;
        }
        cout<<"front - "<<qfront<<" rear - "<<rear;
        return ans;
    }
};