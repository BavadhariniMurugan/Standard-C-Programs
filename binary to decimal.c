  #include<stdio.h>
  #include<math.h>
  int main()
  {
  	long n;
  	int i,s,r;
  	printf("Enter n");
  	scanf("%ld",n);
  	i=0;
  	s=0;
  	while(n!=0)
  	{
  		r=n%10;
  		s=s+pow(2,i++);
  		n=n/10;
  		
	  }
	  printf("%d\n",s);
	  
  }
