#include<stdio.h>
int main()
{   int a,b,c,i,n;
	printf("Enter n:");
	scanf("%d",&n);
	a=-1;
	b=1;
	for(i=0;i<=n;i++)
	{
		c=a+b;
		printf("%d\t",c);
		a=b;
		b=c;
	}
	return 0;
}
