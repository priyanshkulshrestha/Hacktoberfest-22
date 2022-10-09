class Queue {
    int* arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        // Implement the Constructor
        qfront = 0;
        rear = 0;
        size =100000;
        arr = new int[size]; 
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(rear == qfront){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear!=size)
        arr[rear++] = data;
        else cout<<"Queue is Full";
    }

    int dequeue() {
        // Implement the dequeue() function
        if(rear != qfront){
         return arr[qfront++];
        }return -1;
    }

    int front() {
        // Implement the front() function
        if(qfront != rear)
        return arr[qfront];
        return -1;
    }
};