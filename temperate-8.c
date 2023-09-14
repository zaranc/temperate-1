#include<stdio.h>
int main()
{
	int a,b,count=0;
	printf("ENTER ANY VALUE TO FIND THAT NUMBER IS EITHER PRIME OR NOT PRIME \n= ");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		if(a%b==0)
		{
			count++;
		}
	}
	if(count==2)
	printf("THIS NUMBER IS PRIME NUMBER = %d",a);
	else
	printf("THIS NUMBER IS NOT A PRIME NUMBER = %d",a);
	
}
	
