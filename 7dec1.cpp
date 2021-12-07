#include<stdio.h>
main()
{
	int a;
	scanf("%d",&a);
	if(a<=0)
	{
		printf("Freezing weather");
	}
	else if(a<=10)
	{
		printf("Very cold weather");
	}
	else if(a<=20)
	{
		printf("Cold weather");
	}
	else if(a<=30)
	{
		printf("Normal in temp");
	}
	else if(a<40)
	{
		printf("Its hot");
	}
	else if(a>=40)
	{
		printf("Its very hot");
	}
}
