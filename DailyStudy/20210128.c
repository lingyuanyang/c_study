//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include <stdio.h>

/*
指针类型决定了能对内存操作的具体位数
*/
//int main() {
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pc = &a;
//	*pc = 0;
//	return 0;
//}

/*
指针类型决定了步长（指针+-整数）
*/
//int main() {
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa); //0000001CD877F724
//	printf("%p\n", pa + 1); //0000001CD877F728
//	printf("%p\n", pc);//0000001CD877F724
//	printf("%p\n", pc+1);//0000001CD877F725
//	return 0;
//}