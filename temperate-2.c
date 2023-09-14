#include<stdio.h>
int main()
{
	int a,b;
	
	printf("MULTIPLICATION TABLE OF 500 IS HERE \n: ");
	
	for(a=500,b=1;b<=10;b++)
	{
		printf("\n%d  x  %d  =  %d",a,b,(a*b));
	}
	
	return 0;
}
