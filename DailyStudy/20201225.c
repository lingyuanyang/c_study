//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//#include <math.h>

/*
最大公约数
-> 辗转相除法
*/
//int main() {
//	int m = 24;
//	int n = 17;
//	int a = 0;
//	scanf("%d%d", &m, &n);
//	while (a = m % n) {
//		m = n;
//		n = a;
//	}
//	printf("最大公约数为：%d", n);
//	return 0;
//}

/*
1000 ~ 2000年之间的闰年
*/
//int main() {
//	for (int i = 1000; i <= 2000; i++) {
//		/*if (!(i % 4) && (i % 100)) {
//			printf("%d\n", i);
//		}
//		else if (!(i % 400))
//		{
//			printf("%d\n", i);
//		}*/
//		if ((!(i % 4) && (i % 100)) || !(i % 400)) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

/*
打印素数
1，试除法
*/
//int main() {
//	int count = 0;
//	for (int i = 100; i <= 200; i++) {
//		int j = 0;
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (i == j) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ntotal: %d ", count);
//	return 0;
//}

/*
素数求解的N种境界（筛法）
*/
//int main() {
//	int count = 0;
//	for (int i = 101; i <= 200; i+=2) {
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++) {//j<i/2
//			if (i % j == 0) {
//				break;
//			}
//		}
//		if (j * j > i) {
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ntotal: %d ", count);
//	return 0;
//}