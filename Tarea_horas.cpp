#include<stdio.h>
int main()
{
	int hours, minutes, result;
	
	printf("How many hours passed since you start? ");
	scanf("%d", &hours);
	printf("How many minutes passed since you start? ");
	scanf("%d", &minutes);
	
	result = hours*60 + minutes;
	printf("The result of how many minutes passed: %d", result);
	
	return 0;
}
