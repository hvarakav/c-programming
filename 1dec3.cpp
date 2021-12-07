#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		printf("b is minimum");
	}
	else
	{
		if(b>c)
		{
			printf("c is minimum");
		}
		else
		{
			printf("a is minimum");
		}
	}
}
