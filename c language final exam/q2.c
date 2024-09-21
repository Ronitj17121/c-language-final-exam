#include<stdio.h>
#include<conio.h>
// c program to find sum of element of a matrix.
void main()
{

	int row,coloum,sum,n;
	
	printf("enter row of array : ");
	scanf("%d",&row);
	printf("enter coloum of array : ");
	scanf("%d",&coloum);
	

	int a[r][c];
	
	for(r=1; r<=n; r++)
	{
		for(c=1;c<=n;c++)
		{
			printf("a[r][c]");
		}
		printf("\n ");
	}
	
	sum = row * coloum;
	
	printf("%d * %d =%d",row,coloum,sum);
	
}
