#include<stdio.h>
#include<conio.h>
// write a c program find the third angle of a triangle if two angle are given.
void main()
{
	int angleA,angleB,angleC;
	
	printf("enter a value of angle A : ");
	scanf("%d",&angleA);
	printf("enter a value of angle B : ");
	scanf("%d",&angleB);
	
	angleC = 180 - (angleA + angleB);
	
	printf("angleC value is %d",angleC);
	
}
