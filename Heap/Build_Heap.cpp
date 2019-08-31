int Build_heap(struct Huffman *ar, int high)
{
	int  temp = 0, i = 0, j = 0;
	if(high == 2)
	{
		if(ar[i].frequency > ar[2*i + 1].frequency)
		{
			Swap(&ar[i], &ar[2*i + 1]);
		}
	}
	else
	{
	
		for(i = floor(high/2) - 1; i >= 0; i--)
		{
			j = i;
			while(j <= floor(high/2) - 1)
			{
				if(ar[j].frequency > ar[2*j + 1].frequency || ar[j].frequency > ar[2*j + 2].frequency)
				{
					if(ar[2*j + 1].frequency < ar[2*j + 2].frequency)
					{
						Swap(&ar[j], &ar[2*j + 1]);
						j = 2*j + 1;
					}
					else
					{
						Swap(&ar[j], &ar[2*j + 2]);
						j = 2*j + 2;
					}
				}
			}
		}
	}
