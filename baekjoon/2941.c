#include <stdio.h>

int main() {
	char str[100];

	scanf("%s", str);

	int count = 0;

	for(int i = 0; str[i] != '\0'; i ++, count ++) {
		switch(str[i]) {
			case 'c':
				if(str[i + 1] == '=' || str[i + 1] == '-') i ++;
				break;
			case 'd':
				if(str[i + 1] == 'z' && str[i + 2] == '=') i += 2; 
				else if(str[i + 1] == '-') i ++;
				break;
			case 'l':
				if(str[i + 1] == 'j') i ++;
				break;
			case 'n':
				if(str[i + 1] == 'j') i ++;
				break;
			case 's':
				if(str[i + 1] == '=') i ++;
				break;
			case 'z':
				if(str[i + 1] == '=') i ++;
				break;
		}
	}
	printf("%d", count);

	return 0;
}
