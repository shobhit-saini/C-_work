    int height(Node* root) {
        // Write your code here.
        int a=0,b=0,c=0;
        if(root==NULL)
        {
            return -1;
        }
        else
        {
            a=height(root->left)+1;
            b=height(root->right)+1;
            if(a>=b)
            {
                //cout<<"c1:"<<c;
                return (a);
            }
            else
            {
                //cout<<"c2:"<<c;
               return b;
            }
        }
    }
