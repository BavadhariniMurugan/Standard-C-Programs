#include<stdio.h>
int main()
{
	int a[100],n,i,j,c;
	printf("enter n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d ele :\n",i+1);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n-1;i++)
	{
	
	for(j=i+1;j<n;j++)
	if(a[i]>a[j])
	{
		c=a[i];
		a[i]=a[j];
		a[j]=c;
		
}

	}
for(i=0;i<n;i++)
printf("%d\n",a[i]);

return 0;
}
