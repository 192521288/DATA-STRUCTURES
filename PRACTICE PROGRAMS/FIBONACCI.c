#include<stdio.h>
int fibo(int n)
{
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int main(){
	int i,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("FIBONACCI SERIES:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",fibo(i));
	}
	return 0;
}