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

int findNodeRec(Node *head, int n)
{
	//Write your code here
    static int i=0;
    if(head==NULL){
        return -1;
    }
    if(head->data==n){
        return i;
    } 
}
