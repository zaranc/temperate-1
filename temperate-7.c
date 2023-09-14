#include<stdio.h>
int main()
{
	int a,b=0,c=1,d,e;
	
	printf("ENTER ANY NUMBER FOR PRINT THE FIBONACCI SERIES \n= ");
	scanf("%d",&a);

	for(e=1;e<=a;e++)
	{
		printf("%d\n",b);
		d=b+c;
		b=c;
		c=d;
	}
	return 0;
}
