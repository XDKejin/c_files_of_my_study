
#include <stdio.h>
#include <math.h>
#include <string.h>
#define LENGTH 10
int main()
{

	int a[LENGTH];

	for(int i = 0; i < LENGTH; i++){
		scanf("%d",&a[i]);
	}
	
	for(int i = 0; i < LENGTH; i++){
		for(int j = i; j < LENGTH; j++){
			if(a[i] > a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}		
		}
	}


	for(int i = 0; i < LENGTH; i++){
		printf("%d ",a[i]);
	}


		
	printf("\n");
	return 0;

}
