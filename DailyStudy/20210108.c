//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

///*
//* λ������
//* & -> ��������λ��
//* ��0��0
//*/
//int main() {
//	//00000000000000000000000000000011
//	int  a = 3;
//	//00000000000000000000000000000101
//	int  b = 5;
//	//00000000000000000000000000000001
//	int c = a & b;
//	printf("%d", c);//1
//	return 0;
//}

///*
//* λ������
//* | -> ��������λ��
//* ��1��1
//*/
//int main() {
//	//00000000000000000000000000000011
//	int  a = 3;
//	//00000000000000000000000000000101
//	int  b = 5;
//	//00000000000000000000000000000111
//	int c = a | b;
//	printf("%d", c);//7
//	return 0;
//}


///*
//* λ������
//* ^ -> ��������λ���
//* ͬ0��1
//*/
//int main() {
//	//00000000000000000000000000000011
//	int  a = 3;
//	//00000000000000000000000000000101
//	int  b = 5;
//	//00000000000000000000000000000110
//	int c = a ^ b;
//	printf("%d", c);//6
//	return 0;
//}

/*
swap 
*/
//int main() {
//	int a = 3;
//	int b = 5;
//	printf("before -> a=%d, b=%d\n", a , b);
//	//1.temp var
//	/*int temp = 0;
//	temp = a;
//	a = b;
//	b = temp;
//	printf("after -> a=%d, b=%d\n", a, b);*/
//	//2.overflow but fast
//	/*a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("after -> a=%d, b=%d\n", a, b);*/
//	//3.not fast
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("after -> a=%d, b=%d\n", a, b);
//	return 0;
//}

/*
��һ���������ڴ��ж����Ƶ�1�ĸ���
*/
//int main() {
//	int num = 0;
//	//ͳ�Ʋ������ж��ٸ�1
//	//num&1 == 1
//	//00000000000000000000000000000011    -> 3
//	//00000000000000000000000000000001    -> 1
//	//
//	scanf("%d", &num);
//	int count = 0;
//	/*while (num) {
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}*/
//	for (int i = 0; i < sizeof(int) * 8; i++) {
//		if (1 == (num >> i) & 1)
//			count++;
//	}
//	printf("count->%d\n", count);
//	return 0;
//}

//int main() {
//	int num = 3;
//	int i = 0;
//	int count = 0;
//	while (num) {
//		count++;
//		num = num & (num - 1);	
//	}
//	printf("count->%d\n", count);
//	return 0;
//}