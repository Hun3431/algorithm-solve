#include <stdio.h>

int main() {
	char str[100];

	scanf("%s", str);

	int len;
	
	for(len = 0; str[len] != '\0'; len ++);

	for(int i = 0; i <= len / 2 - 1; i ++) {
		if(str[i] != str[len - i - 1]) {
			printf("0");
			return 0;
		}
	}
    printf("1");

	return 0;
}
