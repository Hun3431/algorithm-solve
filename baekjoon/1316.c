#include <stdio.h>

int main() {
	int cycle;
	scanf("%d", &cycle);

	int count = 0;
	char str[100];
	
	while(cycle --) {
		int alpha[26] = { 0 };

		scanf("%s", str);

		char before = str[0];
		
		for(int i = 0; str[i] != '\0'; i ++) {
			if(str[i] != before) {
				if(alpha[str[i] - 'a']){
					count --;
					break;
				}
				before = str[i];
			}
			alpha[str[i] - 'a'] ++;
		}
		count ++;
	}
	printf("%d", count);

	return 0;
}
