/*
 *	use file instead of stdin & stdout
 *	not redirect
 *
 * */

#define LOCAL

#include <stdio.h>
#include <math.h>

#include <string.h>

int main()
{
	FILE *fin ,*fout;
	fin = fopen("../required_file/file_test_in1.in","rb");
	fout = fopen("../required_file/file_test_out1.out","wb");
		

	int x,n,min,max,s;
	n = 0;
	s = 0;
	while(fscanf(fin,"%d",&x) == 1){
		s += x;
		if(x < min)	min = x;
		if(x > max)	max = x;
		n++;

	}
	fprintf(fout,"%d %d %.3lf\n",min,max,(double)s/n);
	fclose(fin);
	fclose(fout);
	return 0;
}
