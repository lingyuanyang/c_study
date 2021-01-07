#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void menu() {
	printf("****************************************");
	printf("**********  1.play   0.exit  ***********");
	printf("****************************************");
}

int main() {
	int input = 0;
	do {
		menu();
		printf("please choose:");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//play game
			printf("play game");
			game();
			break;
		case 0:
			printf("bye bye!");
			break;
		default:
			printf("your input error£¬please choose again:");
		}
	} while (input);
	return 0;
}