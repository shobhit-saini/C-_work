int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* ptr1=head1;
    SinglyLinkedListNode* ptr2=head2;
    int len1=0,len2=0,res;
    while(ptr1!=NULL)
    {
        len1++;
        ptr1=ptr1->next;
    }
    while(ptr2!=NULL)
    {
        len2++;
        ptr2=ptr2->next;
    }
    res=abs(len1-len2);
    ptr1=head1;
    ptr2=head2;
    if(len1>len2)
    {
        for(int i=0;i<res;i++)
        {
            ptr1=ptr1->next;
        }
    }
    if(len1<len2)
    {
        for(int i=0;i<res;i++)
        {
            ptr2=ptr2->next;
        }
    }
    while(ptr1!=ptr2)
    {
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return ptr1->data;

}
