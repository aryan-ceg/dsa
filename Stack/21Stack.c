#include<stdio.h>
char *rev(char *str)
{
	static int i=0;
	static char revs[100];
	if(*str)
	{
		rev(str+1);
		revs[i++]=*str;
	}
	return revs;
}
int main()
{
	char s[100];
	printf("Enter string:");
	gets(s);
	printf("Reversed String is:%s",rev(s));
	return 0;
}
