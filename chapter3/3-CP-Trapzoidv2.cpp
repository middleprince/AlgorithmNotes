#include <cstdio>
#include <cstring>

int main() {
	int h = 0;
	while (scanf("%d", &h) != EOF) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < (3 * h - 2); j++) {
				if (j < (2 * h - 2 * (i + 1))) printf(" ");
				else printf("*");
			}
			printf("\n");
		}
	}
	return 0;
}
