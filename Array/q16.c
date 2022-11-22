#include<stdio.h>

int square(int n)
{
	return n*n;
}

int main()
{
	printf("==============Square of a Number==============\n");
	int s;
	printf("Enter Number: ");
	scanf("%d",&s);
	printf("%d",square(s));
	
	printf("\n");
	return 0;
}
