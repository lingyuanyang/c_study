#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

/*
* дһ��������a�Ķ����ƣ����룩��ʾ���м���1
*/
/*
* �㷨1
*/
int count_bit_one_1(unsigned int n) {
	//n=13
	//00001101
	int count = 0;
	while (n) {
		if (n % 2 == 1) {
			count++;
		}
		n = n / 2;
	}
	return count;
}

/**
* �㷨2
*/
int count_bit_one_2(int n) {
	int count = 0;
	for (int i = 0; i < 32; i++) {
		if (((n >> i) & 1) == 1) {
			count++;
		}
	}
	return count;
}

/**
* �㷨3
*/
int count_bit_one_3(int n) {
	//n = n&(n-1)
	//13
	//1101   n
	//1100   n-1
	//1100   n = n&(n-1)
	//1011   n-1
	//1000   n = n&(n-1)
	//0111   n-1
	//0000   n = n&(n-1)
	int count = 0;
	while (n) {
		n = n & (n - 1);
		count++;
	}
	return count;
}

int main() {
	int a = 0;
	scanf("%d", &a);
	//-1
	//10000000000000000000000000000001
	//11111111111111111111111111111110
	//11111111111111111111111111111111
	//unsigned �Ѹ�������������
	//int count = count_bit_one_1(a);
	//int count = count_bit_one_2(a);
	int count = count_bit_one_3(a);
	printf("count = %d", count);
	//system("pause");
	return 0;
}