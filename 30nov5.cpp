#include<stdio.h>
main()
{
	int weeklyhours;
	float hourlyrate,earnings;
	printf("enter hours and rate");
	scanf("%d%f",&weeklyhours,&hourlyrate);
	if(weeklyhours<=40)
	{
		earnings=weeklyhours*hourlyrate;
	}
	else
	{
		earnings= weeklyhours*hourlyrate+(weeklyhours-40)*hourlyrate*1.5;
	}
	printf("the earnings are %f",earnings);
}
