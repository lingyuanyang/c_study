//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <string.h>
//
//int main() {
//	for (int i = 0; i < 100; i++) {
//		if (0 != i % 2) {
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//int main() {
//	int input = 0;
//	printf("please input any number: ");
//	scanf("%d", &input);
//	if (0 == input % 2) {
//		printf("Not a Odd Number");
//	}
//	else
//	{
//		printf("Is a Odd Number");
//	}
//	return 0;
//}

/*
&a 取地址符
*p 解引用操作符/间接引用操作符
* 00AFFED0   16进制
*/
//int main() {
//	int a = 10; //10
//	int* p = &a; //00AFFED0
//	printf("%d\n", sizeof(p));
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}

//struct Book
//{
//	char name[20];
//	char author[50];
//	float price;
//};
//
//int main() {
//	struct Book b = { "C program","lingyuanyang",55.50 };
//	struct Book* pb = &b;
//	//.  结构体变量.成员
//	//-> 结构体指针->成员
//	printf("book's name: %s\n", pb->name);
//	printf("book's name: %s\n", pb->author);
//	printf("book's name: %f\n", pb->price);
//
//	strcpy(b.name, "C++"); //strcpy -> string copy
//	printf("book's name: %s\n", (*pb).name);
//	printf("book's name: %s\n", (*pb).author);
//	printf("book's name: %f\n", (*pb).price);
//
//	printf("book's name: %s\n", b.name);
//	printf("book's author: %s\n", b.author);
//	printf("book's price: %f\n", b.price);
//}