#include <stdio.h>

//do while loop ∏¸  ∫œ
int main() {
	int x;
	int n = 0;
	scanf("%d", &x);
	do {
		x /= 10;
		n++;
	} while (x > 0); //¡Ù“‚£ª
	printf("%d", n);

	return 0;
}
