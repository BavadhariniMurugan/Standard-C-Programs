#include<stdio.h>
int main()

{   int a,b,c;
    printf("Enter a and b:");
	scanf("%d %d",&a,&b);
	printf("Before Swapping\n");
	printf("a=%d\n b=%d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("After Swapping\n");
	printf("a=%d\n b=%d\n",a,b);
	
return 0;
	
}
