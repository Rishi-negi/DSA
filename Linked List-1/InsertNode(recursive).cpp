/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
Node* insert(Node* head , Node* p , Node* q ,int i , int n){
    if(i==1){
        Node* newnode = new Node(n);
        newnode->next = q;
        p->next = newnode;
        return head;
    }
    i--;
    p=p->next;
    q=q->next;
    insert(head , p , q , i , n);
} 
Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    Node* temp = head;
    Node* p = head;
    Node* q = p->next;
    
    if(i==0){
        Node* newnode = new Node(data);
        newnode->next = p;
        head = newnode;
        return head;
    }
    
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    if(count-1>=i)
        return insert(head , p , q ,i , data);
    
    
    return head;


}