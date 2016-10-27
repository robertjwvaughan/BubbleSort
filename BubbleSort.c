/*
Bubble Sort
Robert Vaughan
29/02/2016
*/

#include <stdio.h>
#define SIZE 4

//Prototypes
void bubbleSort(int*);

main()
{
	int my_array[SIZE] = {4, 6, 1, 2};
	int i = 0;
	
	bubbleSort(my_array);
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", *(my_array + i));
	}//end for
	
}//end main

/*
	Implementation of Bubble Sort in C
*/

void bubbleSort(int* sort_array)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int x = 0;
	int min = 0;
	int temp = 0;
	
	for (i = 0; i < SIZE - 1; i++)
	{
		min = i;
		
		for (j = i + 1; j < SIZE; j++)
		{
			if (*(sort_array + j) < *(sort_array + min))
			{
				min = j;
			}//end if
	
		}//end for
		
		//Swaping
		temp = *(sort_array + min);
		*(sort_array + min) = *(sort_array + i);
		*(sort_array + i) = temp;

	}//end for
	
}//end bubbleSort

