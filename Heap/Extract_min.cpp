int Extract_min(struct Huffman *ar, int high)
{
	int i = 0;
	Swap(&ar[0], &ar[high - 1]);
	
	high = high - 1;
	
	while(i <= (high/2)-1)
	{
		if(ar[i].frequency >ar[2*i + 1].frequency || ar[i].frequency > ar[2*i + 2].frequency)
		{
			if(ar[2*i + 1].frequency < ar[2*i + 2].frequency)
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
