#include <stdio.h>

#include <math.h>

#include <string.h>
#define MAX_N 105
int main()
{
	int a[MAX_N];
	
	int x,n=0;

	while(scanf("%d",&x) == 1){
		a[n++] = x;
	}
	
	for(int i=n-1 ; i>=1 ; i--)
		printf("%d ",a[i]);



	
	printf("%d\n",a[0]);


}
