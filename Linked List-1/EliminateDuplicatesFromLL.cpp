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
Node *removeDuplicates(Node *head)
{
    if(head==NULL)
        return head;
    
    Node* prev = head;
    Node* p = head;
    Node* q = head->next;
    
    while(q!=NULL){
         if(prev->data == q->data){
             //q=q->next;
             //continue;
         }
         else{
             p = p->next;
             p->data = q->data;
             prev=q;
             if(q==NULL){
                   break;
             }
         }
        q = q->next;
    }
    p->next = NULL;
    return head;
}