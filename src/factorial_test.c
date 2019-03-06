#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int s = 0;
	int tmp = 1;

	for(int i=1 ; i<=n ; i++){
		for(int j=1 ; j<=i ;j++){
			tmp *= j;	
		}
		s += tmp ;
		tmp = 1;
	}
	printf("%d",s);

}
