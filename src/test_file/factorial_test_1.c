#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int s = 0;
	int tmp = 1;

	for(int i=1 ; i<=n ; i++){
		tmp *= i;
		s += tmp;
	}
	printf("%d",s);

}
