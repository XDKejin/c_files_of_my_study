
#include <stdio.h>
#include <math.h>
#include <string.h>

void swap(int* a,int* b);

int main()
{
	int a,b;

	scanf("%d %d",&a,&b);
		
	swap(&a,&b);
	


	printf("%d %d\n",a,b);
	return 0;

}

void swap(int *a , int *b){
	int t;

	t = *a;
	*a = *b;
	*b = t;
	
}
