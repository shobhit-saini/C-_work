 Node *lca(Node *root, int v1,int v2) {
        Node* temp1 = root;
        while(1)
        {
            if(temp1 -> data > v1 && temp1 -> data > v2)
            {
                temp1 = temp1 -> left;
            }
            else if(temp1 -> data < v1 && temp1 -> data < v2)
            {
                temp1 = temp1 -> right;
            }
            else 
            {
                return temp1;
            }
        }
    }
