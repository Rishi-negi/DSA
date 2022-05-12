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

Node *reverseLinkedList(Node *head) {
    // Write your code here
    Node* dummy = NULL;
            Node* a = head;
            Node* b=NULL;
            
            while(a!=NULL){
                    b = a->next;
                    a->next = dummy;
                    dummy = a;
                    a = b;
            }
       return dummy;
}