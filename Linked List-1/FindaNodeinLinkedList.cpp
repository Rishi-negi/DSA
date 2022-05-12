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
int findNode(Node *head, int n){
    // Write your code here.
    Node *temp=head;
    int i=0;
    while(temp!=NULL){
        if(temp->data==n)
            return i;
        
        temp = temp->next;
        i++;
    }
    return -1;
}