//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>
//#include <math.h>

/*
���Լ��
-> շת�����
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
//	printf("���Լ��Ϊ��%d", n);
//	return 0;
//}

/*
1000 ~ 2000��֮�������
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
��ӡ����
1���Գ���
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
��������N�־��磨ɸ����
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