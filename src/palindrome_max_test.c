/*
 *	find max palindrome string in stdin;
 *	output the max palidrome string in the string that input from keyboard; 
 *
 * */
#include <stdio.h>

#include <ctype.h>

#include <string.h>
#define MAX_N 5000+10

char buf[MAX_N],s[MAX_N];

int p[MAX_N];

int main()
{

	int n, m = 0,max = 0, x, y;
	int i, j;
	
	fgets(buf, sizeof(s), stdin);
	
	n = strlen(buf);

	for(i = 0; i < n; i++){
		if(isalpha(buf[i])){
			p[m] = i;
			s[m++] = toupper(buf[i]);
		}
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; i-j >= 0 && i+j <m; j++){
			if(s[i-j] != s[i+j])
				break;
			if(j*2+1 > max){
				max = j*2+1;
				x = p[i-j];
				y = p[i+j];
			}
		}
		for(j = 0; i-j >= 0 && i+j+1 <  m; j++){
			if(s[i-j] != s[i+j+1])
				break;
			if(j*2+2 > max){
				max = j*2+2;
				x = p[i-j];
				y = p[i+j];
			}
		}	
	}
	
	for(i = x; i <= y; i++){
		printf("%c",buf[i]);
	
	}
	

	printf("\n");
	return 0;


}
