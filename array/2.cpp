vector<int> dynamicArray(int n, vector<vector<int>> queries) {
    vector<vector<int>> res(n);
    vector<int>a;
    int lastanswer=0,index,size,k=0,x;
    for(int i=0;i<queries.size();i++)
    {
        //cout<<queries[i][2];
            if(queries[i][0]==1)
            {
                index=((queries[i][1]^lastanswer)%n);
                res[index].push_back(queries[i][2]);
            }
            else if(queries[i][0]==2)
            {
                index=((queries[i][1]^lastanswer)%n);
                size=res[index].size();
                x=((queries[i][2])%size);
                lastanswer=res[index][x];
                a.push_back(lastanswer);
            }
    }
return a;
}
