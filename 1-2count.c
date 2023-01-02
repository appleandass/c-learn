#include <stdio.h>

//ÊýÊýÓÐ¼¸Î»Êý×Ö
int main() {
//	int x;
//	int n = 1;
//	scanf("%d", &x);
//	if ( x > 999) {
//		n = 4;
//	} else if (x > 99) {
//		n = 3;
//	} else if (x > 9 ) {
//		n = 2;
//	} else {
//		n = 1;
//	}
//	printf("%d\n", n);
	int x;
	int n = 0;
	scanf("%d", &x);
//	n++;
//	x /= 10;
	while (x > 0) {
		n++;
		x /= 10;
	}
	printf("%d\n", n);
	return 0;
}
