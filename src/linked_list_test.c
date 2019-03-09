#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "linked_list.h"

LIST L;

int main()
{
	
	position p;
	p = L;
	int x;
	
	for(int i = 0; i < 3; i++){
		scanf("%d ",&x);
		insert(x, L, p);
		p = p -> next;	
	}


	x = is_empty(L);

	printf("%d\n",x);
	return 0;

}
