
#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
	int a;

	scanf("%d",&a);

	char s[20];
	sprintf(s,"%d",a);
	
	s[strlen(s)] = '\0';	
	for(int i = 0; i < strlen(s); i++){
		printf("%c  ",s[i]);
	
	}

	printf("\n");
	return 0;

}
