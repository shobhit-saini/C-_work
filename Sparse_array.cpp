vector<int> matchingStrings(vector<string> strings, vector<string> queries) {
   vector<int>v;
    int res;
    for(int i=0;i<queries.size();i++)
    {
        res=0;
        for(int j=0;j<strings.size();j++)
        {
            if(strcmp(queries[i].c_str(),strings[j].c_str())==0)
            {
                res++;
            }
        }
        v.push_back(res);
        
    }
return v;
}
