#include <stdio.h>
int main(){
	int a,b,c;
	double aver;
	aver = 0;

	scanf("%d %d %d",&a,&b,&c);
	aver =(a+b+c)/3.0;

	printf("%.3f \n",aver);	
}
