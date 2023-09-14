#include<stdio.h>
int main()
{
	char cha='a';
	printf("ENTER THE ANY ALPHABET IN SMALL LATER \n=");
	scanf("%c",&cha);
	
	do{
		printf("%c",cha);
		cha++;
	}while(cha<='z');
	
	return 0;
}
