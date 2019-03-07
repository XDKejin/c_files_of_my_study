
#include <stdio.h>
#include <math.h>
#include <string.h>

int is_prime(int num);
int main()
{
	int m;
	int last_prime = 0;
	int max_prime = 0;
	int flag = 0;

	scanf("%d",&m);
	if(m < 5){
		printf("can't find twin prime !\n");
		return 0;
	}


	for(int i = m-1; i > 2; i--){
		if(is_prime(i)){
			if(!flag){
				max_prime = i;
				flag = 1;
			}else{
				last_prime = i;
				if(max_prime - last_prime == 2){
					break;
				}else{
					max_prime = i;
				}				
			}
		}
	}
	
	printf("%d  %d\n",last_prime,max_prime);

	return 0;

}


int is_prime(int num){
	for(int i = 2; i*i < num; i++){
		if(num % i ==0)
			return 0;
	
	}
	return 1;

}
