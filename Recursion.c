#include <stdlib.h>
#include <stdio.h>
#include <string.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
	int i;
	for(i = 0; i < 10; ++i)
	{
		printf("%d!\t\t%lli\n", i, factorial(i));
	}
}

unsigned long long int factorial(unsigned int number)
{
	//base case
	if(number <= 1)
		return 1;
	else //recursive step
		return (number * factorial(number - 1));
}















/*
void reverse(char *s, int len)
{
	char temp;

	if (len > 1) {
		temp = s[0];
		s[0] = s[len-1];
		s[len-1] = temp;
		reverse(s+1,len-2);
	}
}
*/