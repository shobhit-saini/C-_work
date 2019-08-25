int countingValleys(int n, string s) {
    int length = strlen(s.c_str());
    int valley = 0, counter = 0, i = 0, counter1 = 0;
    for(; i < length; i++)
    {
        counter1 = counter;
        if(s[i] == 'U')
        {
            counter++;
        }
            else
            {
                counter--;
            }
        if(counter == 0 && counter1 == -1)
        {
            valley++;
            cout<<valley;
        }
    }
return valley;
}
