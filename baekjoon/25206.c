#include <stdio.h>

int main() {
	double sum = 0.0;
	double total = 0.0;
	
	for(int i = 0; i < 20; i ++) {
		char a;
		do {
			scanf("%c", &a);
		} while(a != ' ');

		double time;
		scanf("%lf ", &time);

		char score;
		scanf("%c", &score);

		if(score == 'P') continue;
		if(score == 'F') {
			total += time;
			continue;
		}

		sum += ('E' - score) * time;
		total += time;
		
		char plus;
		scanf("%c", &plus);
		if(plus == '+') sum += (0.5 * time);
	}
	printf("%lf", sum / total);
}
