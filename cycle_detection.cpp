bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* ptr1,*ptr2;
    bool res;
    ptr1=head;
    ptr2=head;
    if(ptr1->next==ptr1)
    {
        return 1;
    }
    else if(ptr1->next==NULL)
    {
        return 0;
    }
    if(ptr2->next->next!=NULL)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    else
    return 0;
    while((ptr2!=NULL)&&(ptr2->next!=NULL))
    {
        if((ptr1==ptr2))
        {
            return 1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next->next;
    }
    return 0;
}
