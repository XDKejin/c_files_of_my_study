#include <stdio.h>

int main()
{
	int x,n,min,max,s;
	n = 0;
	s = 0;
	while(scanf("%d",&x) == 1){
		s += x;
		if(x < min)	min = x;
		if(x > max)	max = x;
		n++;

	}
	printf("%d %d %.3lf\n",min,max,(double)s/n);
}
