
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int m;

	scanf("%d",&m);
	

	for(int i = 2; i*i < m; i++){
		if(m % i == 0)
			printf("m isn't prime!\n");	
	}
	printf("m is prime!\n");

}
