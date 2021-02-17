#include <stdio.h>
#include <stdlib.h>

void fib();

int main(int argc, char *argv[]) {
	if(argc<2) {
		int max;
		printf("Maximum iterations: ");
		scanf("%d", &max);
		fib(max);
		return 0;
	}
	int argint = atoi(argv[1]);
	if(argint > 45) { fib(45); return 0; }
	else { fib(argint); return 0; }
	return 1;
}

void fib(int max) {
	int x,y,z;
	y = 1; x = 1;
	int i = 0;
	do {
		printf("%d\n", x);
		z=x+y;
		x=y;
		y=z;
		++i;
	} while(i < max);
}
