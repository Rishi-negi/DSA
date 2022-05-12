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
class Stack{
    Node* head ;
    int capacity;
    public:
    Stack(){
        head = NULL;
        capacity = 0;
    }
    
    int getSize(){
        return capacity;    
    }
    
    bool isEmpty(){
        if(head==NULL)
            return true;
        else 
            return false;
    }
    
    void push(int data){    
        Node *newNode = new Node(data);
        capacity++;
        if(isEmpty()){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    
    int pop(){
        if(isEmpty())
            return -1;
        
        Node* p= head;
        head = head->next;
        capacity--;
        return p->data;
    }
    
    int top(){
        if(isEmpty())
            return -1;
        
        return head->data;
    }
};


