#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<Math.h>
using namespace std;

//Structure for storing Alphabet and it's frequency, left pointer and right pointer
struct Huffman
{
	char data;
	int frequency;
	struct Huffman *left;
	struct Huffman *right;
};

//Swapping two structure type variable
int Swap(struct Huffman *a, struct Huffman *b)
{
	struct Huffman temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//Building the Heap 
int Build_heap(struct Huffman *ar, int high)
{
	int  temp = 0, i = 0, j = 0;
	
	//For loop from those elements who have atleast one child from bottom
		for(i = floor(high/2) - 1; i >= 0; i--)
		{
			j = i;
			
			//Heapify from Top
			while(j <= floor(high/2) - 1)
			{
				if((2*j +2 < high))
				{
					if((ar[j].frequency > ar[2*j + 1].frequency) || (ar[j].frequency > ar[2*j + 2].frequency))
					{
						if((ar[2*j + 1].frequency < ar[2*j + 2].frequency))
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
					
					else
					{
						break;
					}
						
				}
				else if(ar[j].frequency > ar[2*j + 1].frequency)
				{
					Swap(&ar[j], &ar[2*j + 1]);
						j = 2*j + 1;
				}
				else
				{
					break;
				}
			}
		}
	
return 0;
}
	int main()
	{
		int i = 0, N = 0;
		cout << "Enter the number of characters:\n";
		cin >> N;
		struct Huffman ar[2*N];
		cout << "Enter the character and it's frequency:";
		for(i = 0; i < N; i++)
		{
			cin >> ar[i].data;
			cin >> ar[i].frequency;
			ar[i].left = NULL;
			ar[i].right = NULL;
		}	
		
		Build_heap(ar, N);
		
		for(i = 0; i < N; i++)
		{
			cout <<  ar[i].data << "\t";
			cout << ar[i].frequency << "\t";
			cout << ar[i].left << "\t";
			cout << ar[i].right << "\n";
		}
	}
