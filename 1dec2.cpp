#include<stdio.h>
int main()
{
	int a,b,c;
	char x;
	scanf("%d%d%d%c",&a,&b,&c,&x);
	x=(b^2-4*(a*c));
	if(x>0)
	{
		printf("real");
	}
	else
	{
		if(x=0)
		{
			printf("equal");
		}
		else
		{
			printf("imaginary");
		}
	}
}
