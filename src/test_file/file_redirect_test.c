/*
 *	use file instead of stdin & stdout
 *	file redirect
 *
 * */


#define LOCAL

#include <stdio.h>
#include <math.h>

#include <string.h>

int main()
{

	#ifdef LOCAL
		freopen("../required_file/file_test_in.in","r",stdin);
		freopen("../required_file/file_test_out.out","w",stdout);
	#endif
		

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
	
	return 0;
}
