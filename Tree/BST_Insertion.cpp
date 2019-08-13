Node * insert(Node * root, int data) {
        Node* temp = NULL, *temp1 = NULL;
        int l = 0, r = 0;
        if(root == NULL)
        {
            Node* N = new Node(data);
            root = N;
            return root;
        }
        temp = root;
        while(temp != NULL)
        {
            temp1 = temp;
            l=0;r=0;
            if(temp -> data >= data)
            {
                temp = temp -> left;
                l++;
            }
            else
            {
                temp = temp -> right;
                r++;
            }
        }
        Node* N = new Node(data);
        if(l == 1)
        {
            temp1 -> left = N;
        }
        else if(r == 1)
        {
            temp1 -> right = N;
        }
        return root;
    }
