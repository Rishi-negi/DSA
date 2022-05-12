/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/

//complexity Of every operations need to be of O(1) 
class Queue {
   Node* head;
   Node* tail;
   int capacity;
    public:
    Queue() {
		// Implement the Constructor
        head = NULL;
        tail = NULL;
        capacity = 0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		// Implement the getSize() function
        return capacity;
	}

    bool isEmpty() {
		// Implement the isEmpty() function
        if(head==NULL)
            return true;
        
        return false;
	}

    void enqueue(int data) {
		// Implement the enqueue() function
        Node* newNode = new Node(data);
        if(isEmpty()){
            head = newNode;
            tail = newNode;
            capacity++;
            return;
        }
        
        tail->next = newNode;
        tail = tail->next;
        capacity++;
	}

    int dequeue() {
        // Implement the dequeue() function
        if(isEmpty())
            return -1;
        
        Node* p = head;
        head = head->next;
        capacity--;
        return p->data;
    }

    int front() {
        // Implement the front() function
        if(isEmpty())
            return -1;
        
        return head->data;
    }
};