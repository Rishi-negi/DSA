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

Node *skipMdeleteN(Node *head, int M, int N)
{
	// Write your code here
    if(head==NULL || (M>=0 && N==0))
        return head;

    if(M==0 && N>0){
        head = NULL;
        return head;
    }
         
    Node* p = head;
    Node* temp = head ;
    while(temp->next!=NULL)
    {
          int i=M-1;
          int j = N-1;
          while(i--)
          {
              if(temp->next==NULL)
              {
                    return head;
              }  
              p=p->next;
              temp=temp->next;
                
          }
          
          Node* q = p->next;
          temp = temp->next;
          while(j--)
          {
                if(temp->next==NULL)
                {
                    p->next = NULL;
                    return head;
                }
                q = q->next;
                temp = temp->next;
          }
          
          p->next=q->next;
          p=p->next;
          temp = p;
    }
    return head;
}