#include<stdio.h>
int main()
{
	long int a, b, c=1;
	printf("ENTER THE ANY VALUE \n= ");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++) 
	{
		c=c*b;
	}
	printf("FACTORIAL NUMBER OF %d IS = %d",a,c);
	
	return 0;
}
