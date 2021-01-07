//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <math.h>
//#include <stdlib.h>
//#include <time.h>

/*
9的个数
*/
//int main() {
//	int count = 0;
//	for (int i = 1; i < 100; i++) {
//		if (i % 10 == 9) {
//			printf("%d ", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d ", count);
//	return 0;
//}

/*
1/1 - 1/2 + 1/3 - 1/4 + 1/5 + ... + 1/99 - 1/100 = ?
*/
//int main() {
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++) {
//			sum += flag * (1.0 / i);
//			flag = -flag;
//	}
//	printf("%lf", sum);
//	return 0;
//}

///*
//求最大值
//*/
//int main() {
//	int arr[] = { 2, 4, 7, 11, 34, 33535, 24, 71, 10, 9, 16 };
//	int max = arr[0];
//	for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
//		max = max > arr[i] ? max : arr[i];
//	}
//	printf("Max = %d", max);
//	return 0;
//}

///*
//9*9乘法表
//*/
//int main() {
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%d*%d=%-2d ", j, i, i * j); //%2d   %-2d
//		}
//		printf("\n");
//	}
//	return 0;
//}

/*
猜数字游戏
*/
//int main() {
//	int input = 0;
//	//时间戳 current - init(1970-01-01 00:00:00) = (xxx)s
//	//time_t time(time_t *timer)
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("please input:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("bye bye!");
//			break;
//		default:
//			printf("input error, please try again!");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//
//int menu() {
//	printf("***********************************************\n");
//	printf("*************  1.play     0.exit  *************\n");
//	printf("***********************************************\n");
//	return 0;
//}
//
//
//int game() {
//	int num = 0;
//	int value = rand()%100 + 1; //0-RAND_MAX(0x7fff = 32767)
//	while(1){
//		printf("please input a number:");
//		scanf("%d", &num);
//		if (value < num) {
//			printf("your num is larger than the value.\n");
//		}
//		else if (value > num)
//		{
//			printf("your num is smaller than the value.\n");
//		}
//		else
//		{
//			printf("bingo, you are right!\n", num);
//			break;
//		}
//	} 
//	return 0;
//}