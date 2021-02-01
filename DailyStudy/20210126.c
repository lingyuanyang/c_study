//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

///*
//* 隐式整形提升
//*/
//int main() {
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 = a
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 = b
//	//a+b
//	//00000011
//	//00000000000000000000000000000011
//	//01111111
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	char c = a + b; //-126
//	//10000010 = c
//	//11111111111111111111111110000010 补码
//	//11111111111111111111111110000001 反码
//	//10000000000000000000000001111110 源码
//	//-126
//	printf("%d\n", c);
//	return 0;
//}

//int main() {
//	char a = 0xb6; //10110110
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6) {
//		printf("a");
//	}
//	if (b == 0xb600) {
//		printf("b");
//	}
//	if (c == 0xb6000000) {
//		printf("c");
//	}
//	return 0;
//}

//int main() {
//	char c = 1;
//	printf("%u\n", sizeof(c)); //1
//	printf("%u\n", sizeof(+c)); //4
//	printf("%u\n", sizeof(!c)); //1
//	return 0;
//}

/*
long double
double
float
unsigned long int
long int 
unsigned int
int
*/