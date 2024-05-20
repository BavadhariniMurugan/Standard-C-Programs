#include<stdio.h>
int main()
{   int i,n,c;
	printf("Enter n:");
	scanf("%d",&n);
	printf("count of factors :\t");
	c=0;
	for(i=1;i<=n;i++)
	
		if(n%i==0)
	
			c++;
		
	printf(" %d\t",c);
		
	
	return 0;
}
