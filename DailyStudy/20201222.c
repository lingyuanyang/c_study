//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>

/*
模拟登录
*/
//int main() {
//	char pwd[] = "123456";
//	int t = 1;
//	while (t <= 3) {
//		printf("please input your number(%d): ", t);
//		char arr[20] = { 0 };
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0) {  //== 不能用来比较两个数组是否相等
//			printf("login successfully!\n");
//			break;
//		}
//		else {
//			if (t >= 3) {
//				printf("login failed!\n");
//				break;
//			}
//			else {
//				t++;
//				printf("password error\n");
//			}
//		}
//
//	}
//	return 0;
//}

/*
在一组有序数组中查询某个数字n
log2(N)
*/
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 34, 53, 62, 71, 88, 92, 100, 123, 131, 155, 171, 188, 196 };
//	int value = 12;
//	int len = sizeof(arr) / sizeof(int);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right) {
//		int i = (left + right) / 2;
//		if (arr[i] > value) {
//			right = i - 1;
//		}
//		if (arr[i] < value) {
//			left = i + 1;
//		}
//		if (arr[i] == value) {
//			printf("the index of the number in array is: %d", i); 
//			break;
//		}
//	}
//	if (left > right) {
//		printf("the number not in this array!");
//	}
//	return 0;
//}


/*
1!+2!+3!+...+10!
*/
//int main() {
//	int sum = 0;
//	int fac = 1;
//	for (int i = 1; i <= 10; i++) {
//		fac *= i;
//		sum += fac;
//	}
//	printf("the fianl result is: %d", sum);
//	return 0;
//}
//int main() {
//	int sum = 0;
//	for (int i = 1; i <= 3; i++) {
//
//		int fac = 1;
//		for (int j = 1; j <= i; j++) {
//			fac *= j;
//		}
//		sum += fac;
//	}
//	printf("the fianl result is: %d", sum);
//}


/*
n的阶乘
*/
//int main() {
//	int input;
//	int res = 1;
//	printf("please input your number: ");
//	scanf("%d", &input);
//	for (int i = 1; i <= input; i++) {
//		res *= i;
//	}
//	printf("the factorial of your number is: %d", res);
//	return 0;
//}