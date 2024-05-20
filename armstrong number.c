#include<stdio.h>
int main()

{
  int n,r,s,t;
   printf("Enter n:");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(t==s)
	printf("%d\n is an armstrong number",s);
return 0;	
	
}
