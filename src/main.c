#include<stdio.h>
#include<math.h>
#include<string.h>

int main(){

	char str[15];
	scanf("%s",str);

	int result = 0;
	int len = strlen(str);

	for(int i = 0; i < len; i++){
		result *= 10;
		result += str[i] - '0';
	}
	printf("%d",result);




}
