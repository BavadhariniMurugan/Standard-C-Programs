#include<stdio.h>
int main()
{   int i,n;
	printf("Enter n:");
	scanf("%d",&n);
	printf("even factors are:\t");
	for(i=2;i<=n;i+=2)
	
		if(n%i==0)
		printf(" %d\t",i);
		
		
	
	return 0;
}
