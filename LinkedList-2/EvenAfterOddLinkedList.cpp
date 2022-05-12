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

Node *evenAfterOdd(Node *head)
{
	//write your code here
    if(head==NULL)
        return head;
    
    Node* temp = head;
    Node* OH = NULL;
    Node* OT = NULL;
    Node* EH = NULL;
    Node* ET = NULL;
    
    while(temp!=NULL){
        //Even LL
        if(temp->data %2==0){
            if(EH==NULL){
                EH = temp;
                ET = temp;
            }
            else{
                ET->next = temp;
                ET = ET->next;
            }
        }
        else{
            if(OH==NULL){
                OH = temp;
                OT = temp;
            }
            else{
                OT->next = temp;
                OT = OT->next;
            }
        }    
        temp = temp->next;
    }
    
    if(OH==NULL)
        return EH;
    
    else if(EH==NULL)
        OT->next = EH;
    
    else{
        OT->next = EH;
        ET->next = NULL;
    }
    
    return OH;
}