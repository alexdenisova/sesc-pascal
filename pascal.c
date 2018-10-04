#include <stdio.h>

int main() {
	int y, x, fy=1, fx=1, k=1, i=1, n;
	scanf("%d", &y);
	scanf("%d", &x);
	for(i=1; i<=(y-1); i++) {
		fy=fy*i;
	}
	for(i=1; i<=(x-1); i++) {
		fx=fx*i;
	}
	for(i=0; i<=(y-x); i++) {
		if(i==0){
			k=1;
		}else{
			k=k*i;
		}
	}
	n = fy/(fx*k);
	printf("%d", n);
	return 0;
}
