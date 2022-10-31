#define METERCHARGE 100
#include <stdio.h>
int main()
{
	char name[20];
	int units;
	float charge,total;
	printf ("enter customer name");
	scanf ("%s",name);
	printf ("enter units consumed");
	scanf ("%d",&units);
	if (units<0)
	{
		printf ("Invalid input\n");
		return 1;
	}
	if (units<=200)
	{
		charge= units*0.8;
	}
	else if (units<=300)
	{
		charge= units*0.8+0.9*(units-200);
	}
	else
	{
		charge= units*0.8+0.9*100+1*(units-300);
	}
	total= charge + METERCHARGE;
	if (total>400)
	{
		total=total+(0.15*total);
	}
	printf ("ELETRICITY BILL \n");
	printf ("NAME %s \n", name);
	printf ("units %d \n", units);
	printf ("bill amt %f \n",total);
	return 0;
}
