DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

        DoublyLinkedListNode* curr,*temp;
        curr=head;
        while(curr!=NULL)
        {
            temp=curr->prev;
            curr->prev=curr->next;
            curr->next=temp;
            curr=curr->prev;
        }
        /* Before changing the head, check for the cases like empty  
        list and list with only one node */
         if(temp != NULL )  
            head= temp->prev;  
        return head;
       
}
