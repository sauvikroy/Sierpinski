#include <stdio.h>
#define SIZE (1 << 4)

int main()
{
	int x, y, i;
	for (y = SIZE - 1; y >= 0; y--) {
		for (i = 0; i < y; i++) {
			putchar(' ');
		}
		for (x = 0; x + y < SIZE; x++) {
			putchar((x & y) ? ' ' : '*');
			putchar(' ');
		}
		putchar('\n');
	}
	return 0;
}