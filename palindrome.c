#include<stdio.h>
int main()

{
  long n,r,s,t;
   printf("Enter n:");
	scanf("%ld",&n);
	s=0;
	t=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(t==s)
	printf("%ld\n is a palindrome",t);
	else
	  printf("%ld is not a palindrome",t);
return 0;	
	
}
