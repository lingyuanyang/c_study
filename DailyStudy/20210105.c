//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

/*
array
sizeof - include \0 数组所占空间的大小，包括\0
strlen - exclude \0 数组\0之前的字符个数，只求字符串的长度，遇到\0为止

&arr[0] -> 0022F954
&arr[1] -> 0022F958
&arr[2] -> 0022F95C
&arr[3] -> 0022F960
&arr[4] -> 0022F964
&arr[5] -> 0022F968
&arr[6] -> 0022F96C
&arr[7] -> 0022F970
&arr[8] -> 0022F974
&arr[9] -> 0022F978

arr = &arr[0]  即数组名为数组首字母的地址
两个例外：
1.sizeof(arr)  -- 整个数组的大小，单位是字节
2.&arr -- 取出的是整个数组的地址
*/
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i< sz; i++) {
//		printf("&arr[%d] -> %p\n", i, &arr[i]); //%p -> pointer
//	}
//	return 0;
//}

/*
arr -> 0060F804 数组首个元素的地址
&arr[0] -> 00060F804 数组首个元素的地址
&arr -> 0060F804 整个数组的地址


arr -> 00AFF780
arr + 1 -> 00AFF784

&arr[0] -> 00AFF780
&arr[0] + 1  -> 00AFF784

&arr -> 00AFF780
&arr + 1 -> 00AFF794
*/
//int main() {
//	int arr[] = { 1, 2, 3, 4, 5 };
//	printf("%p\n", arr);
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	return 0;
//}

//test