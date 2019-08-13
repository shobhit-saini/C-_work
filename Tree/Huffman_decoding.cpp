void decode_huff(node * root, string s) {
    node* temp = root;
    int i;
    char var1;
    for(i = 0; i < strlen(s.c_str()); i++)
    {
        var1 = s[i];
        if(var1 == '0')
        {
                temp = temp -> left;
        }
        if(var1 == '1')
        {
                temp = temp -> right;
        }
        if(temp -> left == NULL && temp -> right == NULL)
        {
            cout<<temp -> data;
            temp = root;
        }
    }   
    
}
