// a c program to print even numbers between two numbers using while loop
#include<stdio.h>
void main()
{
	int a,b;
	printf("enter first and last numbers :");
	scanf("%d%d",&a,&b);
	while (a<b)
	{
		if (a%2==0)
		{
			printf("%d  ",a);
		}
		a++;
	}
}
