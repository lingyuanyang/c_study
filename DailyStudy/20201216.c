//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h> //system
//#include <string.h> //strcmp

/*
* 算法
给定一个非空整型数组，除了某个元素只出现一次以外，其余元素均出现两次，找出那个只出现一次的元素
int a = {1,2,3,4,5,1,2,3,4}
*/

//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("please input：\n");
//	scanf("%s", input);
//	if (strcmp("you are a pig", input)) {
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main() {
//	/*
//	* a^a=0
//	* 0^a=a
//	* a^b^a=b
//	*/
//	int a[] = { 1, 2, 3, 4, 8, 1, 2, 3, 4, 11, 8, 34, 76, 34, 76, 92, 92 };
//	int len = sizeof(a) / sizeof(int);
//	int x = 0;
//	for (int i = 0; i < len; i++) {
//		x ^= a[i];
//	}
//	printf("the number occur one time is %d\n", x);
//	return 0;
//}

//int main() {
//	int a[] = { 1,2,3,4,8,1,2,3,4,8,34,76,34,76,92 };
//	int len = sizeof(a) / sizeof(int);
//	int i = 0;
//	while (i < len) {
//		int j = 0;
//		int count = 0;
//		while (j < len) {
//			if (a[i] == a[j])
//				count++;
//			j++;
//		}
//		if (count == 1) {
//			printf("the number occur one time is %d\n", a[i]);
//			break;
//		}
//		i++;
//	}
//	return 0;
//}