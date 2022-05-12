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

Node *appendLastNToFirst(Node *head, int n)
{
if(head==NULL)
    return head;
if(n>=1){
        Node *temp = head;
        Node *q = temp->next;
        
        int count=0;
        while(temp!=NULL){
            q = temp;
            count++;
            temp = temp->next;
        }
        
        Node *p = head;
        temp = p->next;
        int i=1;
        while(i<count-n){
            p = p->next;
            temp = temp->next;
            i++;
        }
        
        q->next = head;
        head = temp;
        p->next = NULL;    
        
        return head;
    }
    else if(n==0 || n==-1)
        return head;
}

// Node *appendLastNToFirst(Node *head, int n)
// {
//     //Write your code here
//     Node *temp = head;
//      Node *p = head;
//     Node *q = p->next;
//     int count=0;
//     while(temp!=NULL){
//         count++;
//         q = temp;
//         temp = temp->next;
//     }
   
    
//     int i=0;
//     while(i<count-n){
//         i++;
//         p = p->next;
//     }
    
// }