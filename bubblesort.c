//sorting in ascending order using bubblesort
#include <stdio.h>

int main()
{
	int array[10],i,j,n,temp;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter elements:\n");
	for (i=0;i<n;i++)
	{
		printf("array[%d]=",i+1);
		scanf("%d",&array[i]);
	}
	printf("The array:\n");	
	for (i=0;i<n;i++)
	{
		printf("array[%d]=%d\n",i+1,array[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i;j++)
		{
			if(array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("Sorted array is:\n");
	for (i=0;i<n;i++)
		{
			printf("array[%d]=%d\n",i+1,array[i]);
		}
}
	
