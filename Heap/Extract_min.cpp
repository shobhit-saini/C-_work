int Extract_min(int *ar, int high)
{
	int i = 0;
	Swap (&ar[0], &ar[high - 1]);
	high = high - 1;
	while(i <= (high/2)-1)
	{
		if(ar[i] >ar[2*i + 1] || ar[i] > ar[2*i + 2])
		{
			if(ar[2*i + 1] < ar[2*i + 2])
			{
				Swap(&ar[i], &ar[2*i + 1]);
				i = 2*i +1;
			}
			else
			{
				Swap(&ar[i], &ar[2*i + 2]);
				i = 2*i + 2;
			}
		}
		else
		{
			break;
		}
	}
return high;

}
