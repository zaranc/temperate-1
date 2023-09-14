#include<stdio.h>
int main()
{
	long int a,sum=0,first_digit,last_digit;
	
	printf("ENTER THE NUMBER FOR FIND THE FIRST DIGIT AND LAST DIGIT OF SUM \n= ");
	scanf("%d",&a);
	
	last_digit=a%10;
	
	while(a>=10)
	{
		a=a/10;
	}
	first_digit=a;
	
	sum=first_digit+last_digit;
	
	printf("FIRST DIGIT AND LAST DIGIT OF SUM IS = %d",sum);
	
	return 0;
}
