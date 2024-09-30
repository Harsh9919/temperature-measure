#include<stdio.h>
int main()
{
	int temperature;
	printf("enter the temperature :");
	scanf("%d",&temperature);
	if(temperature < 10)
	{
		printf("very very cold");
	}
	else if(temperature <20)
	{
		printf("very cool");
	}
	else if(temperature <30)
	{
		printf("normal");
	}
	else if(temperature <40)
	{
		printf("hot");
	}
	else if(temperature <50)
	{
		printf("very very hot");
	}
	else
	{
		printf("invalid input");
	}
	return 0;
}
