/*
 *	count the trees in the triangle;
 *
 *
 * */
#include <stdio.h>
#include <math.h>
#include <string.h>
#define eps 0.00001


double area(double x1, double y1, double x2, double y2, double x3, double y3);	
int is_in_area(int x, int y, double x1, double y1, double x2, double y2, double x3, double y3);

int main()
{

	//input three vertexes
	//
	double x1,y1,x2,y2,x3,y3;
	int sum = 0;

	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	scanf("%lf %lf",&x3,&y3);
	
	//assuming that the point value < 99
	
	for(int i = 1; i <= 99; i++){
		for(int j = 1; j <= 99; j++){
			sum += is_in_area(i,j,x1,y1,x2,y2,x3,y3);
		}
	}

	printf("%d ",sum);
	printf("\n");
	return 0;

}

int is_in_area(int x, int y, double x1, double y1, double x2, double y2, double x3, double y3){
	double s = area(x1,y1,x2,y2,x3,y3);
	double s1 = area(x,y,x1,y1,x2,y2);
	double s2 = area(x,y,x2,y2,x3,y3);
	double s3 = area(x,y,x3,y3,x1,y1);
	
	if(s - s1 - s2 -s3 <= eps){
		return 1;
	}
	return 0;
}


double area(double x1, double y1, double x2, double y2, double x3, double y3){
	return x1*y2 + x3*y1 + x2*y3 - x3*y2 - x1*y3 -x2*y1;

}
