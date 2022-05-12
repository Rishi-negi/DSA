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
/*
Node *deleteNode(Node *head, int pos)
{
    // Write your code here.
    Node *p1 = head;
    Node *q1 = head->next;
    int i=0;
    if(pos==0)
        head = head->next;
    else{
        while(i!=pos-1){
           p1 = p1->next;
           q1 = q1->next;
           if(q1== NULL)
               return head;
        } 
       p1->next = q1->next;
    }
    return head;     
}*/

Node *deleteNode(Node *head, int pos)
{
    //Write your code here
    Node *temp = head;
    Node *p1 = head;

    int len=0 , i=0;
    while(temp!=NULL){
        len++;
        temp = temp->next;
    }
    if(pos>=len)
        return head;
    
    else if(pos==0){
        head = head->next;
        return head;
    }
    
    while(i!=pos-1){
        i++;
        p1 = p1->next;
    }
    
    Node *a = p1->next;
    Node *b = a->next;
    p1->next = b;
    
 return head;

}
