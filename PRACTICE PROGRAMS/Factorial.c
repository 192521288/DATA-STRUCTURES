#include<stdio.h>
long fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("FACTORIAL is:%ld",fact(n));
	return 0;
}