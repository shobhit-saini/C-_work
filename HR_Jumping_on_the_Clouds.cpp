int jumpingOnClouds(vector<int> c) {
    vector<int>:: iterator it;
    int path_length = 0;
    int i = 0;
    for(it = c.begin(); it != c.end();)
    { 
            if((it+1) != c.end() && (*(it+2) != 1))
            {
                path_length+= 1;
                it += 2;
            }
            else if((it+1) != c.end())
            {
            path_length+= 1;
            it += 1;
            }
            else 
                break;
        
    }
return path_length;
}
