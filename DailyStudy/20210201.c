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
Ұָ��
*/
//1.ָ��Ϊ��ʼ������
//int main() {
//	int a;//�ֲ���������ʼ����Ĭ�������ֵ
//	int* p = &a;
//	*p = 20;
//	return 0;
//}

//2.ָ��Խ�����
//int main() {
//	int arr[10] = { 0 };
//	int* p = arr;
//	for (int i = 0; i < 12; i++) {
//		p++;
//	}
//	return 0;
//}

//3.ָ��ָ��Ŀռ��ͷ�
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