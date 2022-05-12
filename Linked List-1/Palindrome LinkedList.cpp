Node* reverseLL(Node* &head){
    
    Node*  dummy = NULL;
    Node*  a = head;
    Node*  b = head->next;
    
    while(b!=NULL){
        a->next = dummy;
        dummy = a;
        a = b;
        b = b->next;
    }
    a->next = dummy;
    return a;
}

bool isPalindrome(Node *head1)
{
    if(head1==NULL || head1->next==NULL)
        return true;
    
    Node* temp = head1;
    int c=0;
    while(temp!=NULL){
        c++;
        temp = temp->next;
    }
    
    Node* head2 = NULL;
    int count = (c/2) - 1;
    //LL is even 
    if(c%2==0){
        int i=0;
        temp = head1;
        while( i!=count ){
            temp = temp->next;
            i++;
        }
        head2 = temp->next;
        temp->next = NULL;
        head2 = reverseLL(head2);
    }
    //LL is odd
    else{
        int i=0;
        temp = head1;
        while( i!=count ){
            temp = temp->next;
            i++;
        }
        head2 = temp->next->next;
        temp->next = NULL;
        head2 = reverseLL(head2);
    }    
    
    //Checking LL for pallindrome
    Node* temp1 = head1 ;
    Node* temp2 = head2 ;
    //int x = 0;
    while(temp1 != nullptr){
        if(temp1->data == temp2->data){
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else
            return false;
    }
    
    return true;
}