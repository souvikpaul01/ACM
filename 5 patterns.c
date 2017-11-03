#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void pattern1()
{
	int i,j,n;
	printf("Enter no. of rows blah blah : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern2()
{
	int i,j,k,n;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=n;k>i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern3()
{
	int i,j,k,n;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=2*n;k>2*i+1;k--)
		{
			printf("*");
		}
		printf("\n");
	}
}


void pattern4()
{
	int i,j,k,n;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=i;k<n+i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

void pattern5()
{
	int i,j,k,n;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=n;j>i;j--)
		{
			printf(" ");
		}
		for(k=i;k<n+i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(void)
{
	
	int choice;
	while(1)
	{
		printf("\n1. Print first pattern ");
		printf("\n2. Print second pattern ");
		printf("\n3. Print third pattern ");
		printf("\n4. Print fourth pattern ");
		printf("\n5. Print fifth pattern ");
		printf("\n6. Exit ");
		printf("\nEnter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 : pattern1();
					 break;
					 
			case 2 : pattern2();
					 break;
					 
			case 3 : pattern3();
					 break;
					 
			case 4 : pattern4();
					 break;
					 
			case 5 : pattern5();
					 break;
					 
			case 6 : exit(0);
					 break;
					 
			default : break;
		}
	}
	return 0;
}
