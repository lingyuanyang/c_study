//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>

///*
//recursion - 递归
//斐波那契数列
//1 1 2 3 5 8 13 21 34...
//*/
//int fib(int n) {
//	//if (a <= 2)
//	//	return 1;
//	//else
//	//	//return fib(a - 1 ) + fib(a - 2);
//		//return (2 * fib(a - 1)) - fib(a - 3);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
////TDD - 测试驱动开发
//int main() {
//	int a = 0;
//	int ret = 0;
//	scanf("%d", &a);
//	ret = fib(a);
//	printf("%d", ret);
//	return 0;
//}

///*
//函数的声明 
//*/
//void add_one(int x);
//
//int main() {
//	int a = 7;
//	//函数的使用
//	add_one(&a);
//	printf("%d\n", a);
//	add_one(&a);
//	printf("%d\n", a);
//	add_one(&a);
//	printf("%d\n", a);
//	return 0;
//}
//
///*
//函数的定义 - 每次调用+1
//*/
//void add_one(int* x) {
//	*x = (*x + 1);
//}

///*
//printf函数返回值是打印内容的长度
//On success, the total number of characters written is returned.
//*/
//int main() {
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

/*
www.cplusplus.com
en.cppreference.com
*/


//#ifndef __ADD_H__  //if not define
//#define __ADD_H__
//#endif


/*
递归经典问题
1.汉诺塔(Tower of Hanoi)
2.青蛙跳台阶问题（剑指offer）
*/
//int main(){
//	int a = 0;
//
//
//	return 0;
//}