#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	printf("it is a capital letter\n");
	else if(ch>='a'&& ch<='z')
	printf("it is small letter\n ");
	else if(ch>='0' && ch<='9')
	printf("it is a digit");
	else
	printf("it is a special symbol");
}


