
#include <stdio.h>
#include <math.h>
#include <string.h>
#define LEN 5

int main()
{
	int list[LEN];
	for(int i = 0; i < 2; i++)
		scanf("%d",&list[i]);
	
	list[2] = '\0';

	printf("%ld \n",sizeof(list)/sizeof(int));
	return 0;

}
