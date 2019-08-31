int Build_heap(int *ar, int high)
{
	int  temp = 0, i = 0;
	for(i = floor(high/2) - 1; i >= 0; i--)
	{
		if(ar[i] > ar[2*i + 1] || ar[i] > ar[2*i + 2])
		{
			if(ar[2*i + 1] < ar[2*i + 2])
			{
				Swap(&ar[i], &ar[2*i + 1]);
			}
			else
			{
				Swap(&ar[i], &ar[2*i + 2]);
			}
		}
	}
return 0;
}
