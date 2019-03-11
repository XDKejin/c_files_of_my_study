
/*
 *	calculate the number of word in a page;
 *
 * */


#define LOCAL

#include <stdio.h>
#include <math.h>

#include <string.h>

int main()
{

	#ifdef LOCAL
		freopen("../required_file/word_calculte_example.txt","r",stdin);
	#endif

	char x;
	char tmp;
	int flag = 0;
	int sum = 0;

	while(scanf("%c",&x) == 1){
		if(flag == 0){
			if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
				tmp = x;
				flag = 1;
				sum ++;
			}
			else 
				flag = 0;

			continue;
		}else{

			if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z')){
				if(!((tmp >= 'a' && tmp <= 'z') || (tmp >= 'A' && tmp <= 'Z'))){
					sum++;
				}else{
					tmp = x;

				}
					
			}
				
		
		}
		
	
	}
	printf("%d\n",sum);
	
	return 0;
}
