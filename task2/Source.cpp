#include <stdio.h>
#include <math.h>

int main() {
	int num = 100;
	while (num <= 999) {
		int a, b, c;
		a = num / 100;
		b = (num % 100) / 10;
		c = num % 10;
		
		if (pow(a, 3) + pow(b, 3) + pow(c, 3) == num) {
			printf("%d\t",num);
		}
		num++;
	}

	return 0;
}