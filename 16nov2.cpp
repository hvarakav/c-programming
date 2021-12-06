#include<stdio.h>
main()
{
	int a,b,x;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	  x=a,a=b,b=x;
	  printf("a is %d",a);
	  printf("b is %d",b);
}
