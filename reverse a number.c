#include<stdio.h>
int main()

{
  int n,r,s;
   printf("Enter n:");
	scanf("%d",&n);
	while(n!=0)
	s=0;
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	printf("%d\n",s);
return 0;	
	
}
