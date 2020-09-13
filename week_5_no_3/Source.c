#include<stdio.h>

void compare(x) {
	if (x > 0 && x != 0) {
		printf("Positive real number and");
		if (x % 2 == 1) {
			printf(" odd number.");
		}
		else {
			printf(" even number.");
		}
	}
	if (x < 0 && x != 0) {
		if (x % 2 == 1) {
			printf(" odd number.");
		}
		else {
			printf(" even number.");
		}
	}
	if (x == 0) {
		printf("Zero integer.");
	}
}

int main() {
	int i;
	scanf("%d", &i);
	compare(i);
}