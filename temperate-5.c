#include<stdio.h>
int main()
{
	int a,n,s=0,reverse,temp;
	
	printf("ENTER ANY VALUE FOR CHECK VALUE IS PALINDROME OR NOT PALINDROME \n=");
	scanf("%d",&a);
	temp=a;
	while(a!= 0)
	{
		reverse=a%10;
		s=(s*10)+reverse;
		a=a/10;
	}
	if(temp==s)
	printf("THIS NUMBER IS PALINDROM NUMBER = %d",s);
	else
	printf("THIS NUMBER IS NOT PALINDROM NUMBER = %d",s);
	
	return 0;
}
