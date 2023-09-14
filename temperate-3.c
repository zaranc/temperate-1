#include<stdio.h>
int main()
{
	int a,count;
	printf("ENTER ANY VALUE TO COUNT THE DIGIT OF VALUE \n=");
	scanf("%d",&a);
	
	for(count=0;a!=0;count++)
	{
		a=a/10;
	}
	printf("\nTHIS IS THE DIGIT OF YOUR VALUE = %d ",count);
}
