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
Node *mergeTwoSortedLinkedLists(Node *h1, Node *h2)
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