//Sum of natural numbers using recursion
#include<stdio.h>
void main()
{
	int num, sum;
	printf("Enter a positive number:");
	scanf("%d",&num);
	sum=addNumbers(num);
	printf("sum %d natural numbers is %d",num,sum);
	
}

int addNumbers(int num)
{
	if(num<=1)
	return num;
	else
	return num+addNumbers(num-1);
}
