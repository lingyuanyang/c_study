//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

//#define N_VALUES 5
///*
//ָ��+-����
//*/
//int main() {
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];) {
//		*vp++ = 0;
//
//	}
//	return 0;
//}

///*
//ָ��-ָ��
//*/
//int main() {
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}


///*
//ʵ��strlen
//1��������
//2���ݹ�
//3��ָ�루���£�
//*/
//int my_strlen(char* str) {
//	char* start = str;
//	char* end = str;
//
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}
//
//int main() {
//	char arr[] = "lingyuanyang";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}