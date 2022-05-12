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
Node* del(Node* head , Node* p , Node* q ,int pos){
    if(pos==1){
        p->next = q->next;
        return head;
    }
    pos--;
    p=p->next;
    q=q->next;
    return del(head , p , q , pos);
} 
Node* deleteNodeRec(Node *head, int pos) {
	
    Node* temp = head;
    Node* p = head;
    Node* q = p->next;
    
    if(pos==0){
        head = head->next;
        return head;
    }
    
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    
    if(pos<count){
        head = del(head , p , q , pos);
        return head;
    }
    
    return head;

}