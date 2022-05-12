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

****************************************************************/
Node *mergeLL(Node *h1, Node *h2)
{
    
            if(h1==NULL)
                    return h2;
            else if(h2==NULL)
                    return h1;
                
            Node *q = NULL;
            Node *p = q;
    
            while (1)
            {
                if (h1 == NULL)
                {
                      p->next = h2;
                      break;
                }

                else if (h2 == NULL)
                {
                      p->next = h1;
                      break;
                }

                  
                
                
                if (h1->data <= h2->data)
                {
                      
                       if (p == NULL){
                            p = h1;
                            q = h1;
                          
                       }
                          
                       else
                       {
                           p->next = h1;
                          
                           p = p->next;
                       }
                    
                     h1 = h1->next;
                }
                    
                else if (h2->data < h1->data)
                {
                    
                
                
                       if (p == NULL){
                            p = h2;
                           q= p;
                       }   
                       else
                       {
                           p->next = h2;
                          
                           p = p->next;
                       }
                    
                     h2 = h2->next;
                }
            }

            return q;
    
}
// Node *mergeSort(Node *head1)
// {
// 	//Write your code here
//     Node* slow = head1;
//     Node* fast = head1->next;
    
//     while(fast!=NULL){
//         if(fast->next = NULL)
//             break;
            
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     Node* head2 = slow->next;
//     slow->next = NULL;
    
//     head1 = mergeSort(head1);
//     head2 = mergeSort(head2);
    
//     return mergeLL(head1 , head2);
// }
Node* mergeSort(Node *head) {
    //write your code here
    //BASE CASE 
    // NEED TO CHK head->next==NULL for fast pointer { pointer used to find the mid}
    if (head == NULL || head->next == NULL)
        return head;

    Node* fast = head->next;
    Node *slow = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    Node* a = head, *b = slow->next;
    slow->next = NULL;

    Node* c = mergeSort(a);
    Node* d = mergeSort(b);
    Node *e = mergeLL(c, d);
    
    return e;
}