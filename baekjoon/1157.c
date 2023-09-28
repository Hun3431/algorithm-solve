#include <stdio.h>

int main() {
	int alpha[26] = { 0 };
	char a;

	int max = 0;

	do {
		scanf("%c", &a);
		if(a >= 'A' && a <= 'Z') {
			alpha[a - 'A'] ++;
			if(alpha[a - 'A'] > max) max = alpha[a - 'A'];	
		} 
		else if(a >= 'a' && a <= 'z') { 
			alpha[a - 'a'] ++;
			if(alpha[a - 'a'] > max) max = alpha[a - 'a'];
		}
	} while(a != '\n');

	char maxAlpha = 0;
	for(int i = 0; i < 26; i ++) {
		if(alpha[i] == max) {
			if(maxAlpha != 0) {
				printf("?");
				return 0;
			}
			maxAlpha = i + 'A';
		} 
	}
	printf("%c", maxAlpha);

	return 0;
}
