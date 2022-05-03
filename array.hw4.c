//Write a C program to swap every two adjacent elements of a given array and display the final array.
#include<stdio.h>
void main()
{
	int i, r, num, arr[10];

printf("Enter size of array: ");
scanf("%d", &num);

printf("Enter array elements: ");
for(i=0;i<num;i++)
{
	scanf("%d", &arr[i]);
}
i=0;
while(i<num-1)
{
	r=arr[i];
	arr[i]=arr[i+1];
	arr[i+1]=r;
	i=i+2;
}

printf("Array list after swapping: ");
for(i=0;i<num;i++)
{
	printf("%d", arr[i]);
}
}

