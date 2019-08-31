int Insert(int *ar, int N, int x)
{
	ar[N] = x;
	int i = N;
	while(i >= 0)
	{
		if(ar[i] < ar[(i-1)/2])
		{
			Swap(&ar[i], &ar[(i-1)/2]);
			i = (i-1)/2;
		}
		else
		{
			return N + 1;
		}
	}
return N + 1;	
}
