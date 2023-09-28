#include <stdio.h>

int main() {
	int count;
	scanf("%d", &count);

	for(int i = 0; i < count; i ++) {
		double num;
		scanf("%lf ", &num);

		char a[2];
		scanf("%s", a);

		switch(a[0]) {
			case 'k':
				printf("%d %.4lf lb\n", i + 1, num * 2.2046);
				break;
			case 'l':
				if(a[1] == 'b') {
					printf("%d %.4lf kg\n", i + 1, num * 0.4536);
				}
				else {
					printf("%d %.4lf g\n", i + 1, num * 0.2642);
				}
				break;
			case 'g':
				printf("%d %.4lf l\n", i + 1, num * 3.7854);
				break;
		}
	}
	return 0;
}
