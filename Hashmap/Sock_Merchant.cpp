int sockMerchant(int n, vector<int> ar) {
    map<int, int> m;
    vector <int>:: iterator itr;
    int pairs = 0;
    for(itr = ar.begin(); itr != ar.end(); itr++)
    {
        m[*itr]++;
    }
    map <int, int>:: iterator itr1;
    for(itr1 = m.begin(); itr1 != m.end(); itr1++)
    {
        pairs+= ((*itr1).second)/2;
    }
   return pairs;
}
