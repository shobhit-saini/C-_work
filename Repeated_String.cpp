long repeatedString(string s, long n) {
    long count = 0, i = 0;
    long val = n/strlen(s.c_str());
    for(i = 0; i < strlen(s.c_str()); i++)
    {
         if(s[i] == 'a')
        {
            count++;
        }
    }
    count *= val;
    long left_in_last = n%strlen(s.c_str());
    for(i = 0; i < left_in_last; i++)
    {
        if(s[i] == 'a')
        {
            count++;
        }
    }
return count;
}
