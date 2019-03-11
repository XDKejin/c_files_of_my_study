#include <stdio.h>

#include <math.h>

#include <string.h>

int main()
{
	int n;
	int digit;

	digit = 1;

	scanf("%d",&n);
	
	while(n/10 > 0)
	{
		n = n/10;	
		digit++;
	}
	
	printf("%d\n",digit);


}
