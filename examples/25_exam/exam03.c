#include <stdio.h>

int main(void) {
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5 + i; j++) {
			if (i + j >= 4) printf("*\t");
			else printf("\t");
		} putchar('\n');
	}
	return 0;
}