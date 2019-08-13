void levelOrder(Node * root) {
        Node* temp;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            temp = q.front();
            cout<<temp->data<<" ";
            q.pop();
            if(temp -> left)
            {
                q.push(temp->left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }

        }
    }
