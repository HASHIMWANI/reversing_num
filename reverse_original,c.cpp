//checking whwther the number is a palindrome or not
#include<stdio.h>
int main()
{
	int orgnum,d1,d2,d3,d4,d5;
	int revnum;
	printf("enter the number to be checked\n: ");
	scanf("%d",&orgnum);
	d5=orgnum%10;
	orgnum=orgnum/10;
	d4=orgnum%10;
	orgnum=orgnum/10;
	d3=orgnum%10;
	orgnum=orgnum/10;
	d2=orgnum%10;
	orgnum=orgnum/10;
	d1=orgnum%10;
	revnum=(d5*10000+d4*1000+d3*100+d2*10+d1);
	if (orgnum==revnum)
	printf("the orignal number and the reversed number are  not equal.");
	else
	printf("the reversed  number and the original number are  equal.");
    
	return 0;

	
	}
