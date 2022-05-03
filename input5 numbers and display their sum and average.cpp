// Write a C program to input 5 numbers from the user and display their sum and average.

#include<stdio.h>

void main()
{
	int arr[10];
	int index = 0;
	int sum = 0;
	float average = 0.0f;
	
	printf("Enter 5 numbers...\n");
	for(index=0; index<5; index++)
		scanf("%d", &arr[index]);
		
	for(index=0; index<5; index++)
		sum = sum + arr[index];
		
	average = sum / 5;
	printf("Sum = %d\n", sum);
	printf("Average = %f\n", average);
}
