#include<stdio.h>
#include<math.h>
int main()
{   int i,n,f;
	printf("Enter n:");
	scanf("%d",&n); 
	if(n==2)
	printf(" %d is prime.\n",n);
	else if(n%2==0||n==1)
	 printf("%d is not prime\n",n);
	else{
		f=1;
		for(i=3;i<=sqrt(n);i+=2)
		if(n%i==0)
		{
			f=0;
			break;
			
		}
		if(f==1)
		printf("%d is prime \n",n);
		else
		printf("%d is not prime\n",n);
		
	}
		
	
	return 0;
}
