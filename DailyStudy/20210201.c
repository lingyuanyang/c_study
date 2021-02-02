//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//int main() {
//
//	int arr[10] = {0};
//	//int* p = arr;
//	char* p = arr;
//	for (int i = 0; i < 10; i++) {
//		*(p + i) = 1;
//	}
//	return 0;
//}


/*
野指针
*/
//1.指针为初始化导致
//int main() {
//	int a;//局部变量不初始化，默认是随机值
//	int* p = &a;
//	*p = 20;
//	return 0;
//}

//2.指针越界访问
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++) {
//		p++;
//	}
//	return 0;
//}

//3.指针指向的空间释放
//int main() {
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//
//int* test() {
//	int a = 10;
//	return &a;
//}