int Build_heap(struct Huffman *ar, int high)
{
	int  temp = 0, i = 0, j = 0;
	
	//For loop from second last level
		for(i = floor((high-2)/3); i >= 0; i--)
		{
			j = i;
			
			//Heapify from Top
			while(j <= floor((high-2)/3))
			{
				if((3*j + 2 < high) && (3*j + 3 < high))
				{
					if((ar[j].frequency > ar[3*j + 1].frequency) || (ar[j].frequency > ar[3*j + 2].frequency) || (ar[j].frequency > ar[3*j + 3].frequency))
					{
						if((ar[3*j + 1].frequency < ar[3*j + 2].frequency) && (ar[3*j + 1].frequency < ar[3*j + 3].frequency))
						{
							Swap(&ar[j], &ar[3*j + 1]);
							j = 3*j + 1;
						}
							else if (ar[3*j + 2].frequency < ar[3*j + 3].frequency)
							{
								Swap(&ar[j], &ar[3*j + 2]);
								j = 3*j + 2;
							}
									else
									{
										Swap(&ar[j], &ar[3*j + 3]);
										j = 3*j + 3;
									}
					}
					
						else
						{
							break;
						}
						
				}
				
				else if((3*j +2 < high))
				{
					if((ar[j].frequency > ar[3*j + 1].frequency) || (ar[j].frequency > ar[3*j + 2].frequency))
					{
						if((ar[3*j + 1].frequency < ar[3*j + 2].frequency))
						{
							Swap(&ar[j], &ar[3*j + 1]);
							j = 3*j + 1;
						}
							else
							{
								Swap(&ar[j], &ar[3*j + 2]);
								j = 3*j + 2;
							}
					}
					
						else
						{
							break;
						}
						
				}
				
					else if(ar[j].frequency > ar[3*j + 1].frequency)
					{
						Swap(&ar[j], &ar[3*j + 1]);
							j = 3*j + 1;
					}
						else
						{
							break;
						}
			}
		}
	
return 0;
}
