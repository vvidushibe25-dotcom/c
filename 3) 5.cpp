#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter 3 integers");
	scanf("%d%d%d",&a,&b,&c);
max=(a>b)?((a>c)?a:c):((b>c)?b:c);
printf("greatest is: %d",max);	
}
