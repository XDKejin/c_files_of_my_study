	/*
	 * a calculator 
	 * input: a string include only one operator
	 * out: the result of the expression
	 *
	 * */
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAX_LENGTH 50
	int strtoint(char *str);
	int main()
	{

		char expression[MAX_LENGTH];
		char first_expression[MAX_LENGTH];
		char second_expression[MAX_LENGTH];
		char operator;
		int first_subscript = 0;
		int second_subscript = 0;
		int result = 0;

		int flag = 0;

		scanf("%s",expression);
		
		int len = strlen(expression);

		for(int i = 0; i < len; i++){
			if(expression[i] == ' '){
				continue;
			}else{
				if(0 == flag){

					if(expression[i] >= '0' && expression[i] <= '9')
						first_expression[first_subscript++] = expression[i];
					else{
						flag = 1;
						operator = expression[i];
					}
				}else{
					if(expression[i] >= '0' && expression[i] <= '9')	
						second_expression[second_subscript++] = expression[i];				
				}
			}
		}
		
		int first = strtoint(first_expression);
		int second = strtoint(second_expression);
		
		if('+' == operator)
 			result = first + second;
		else if('-' == operator)
			result = first - second;
		else if('*' == operator)
			result = first * second;
		else if('/' == operator)
			result = first / second;
		else
			printf("the operator is worong type!\n");

		printf("%d\n",result);
		return 0;

	}


int strtoint(char *str){


	int result = 0;
	int len = strlen(str);

	for(int i = 0; i < len; i++){
		result *= 10;
		result += str[i] - '0';
	}


	return result;

}



