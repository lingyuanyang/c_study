//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <windows.h>  //Sleep
//#include <stdlib.h> //system
/*
welcome to mininglamp!!!

########################
w######################!
we####################!!
wel##################!!!
welc################!!!!
...
welcome to##ininglamp!!!
welcome to mininglamp!!!
*/
//int main() {
//	char arr[] = "welcome to mininglamp!!!";
//	char ch = '#';
//	int left = 0;
//	int right = strlen(arr);
//  //int right = sizeof(arr）/sizeof(arr[0]) - 1 //error  -2
//	while (left <= right) {
//		for (int i = 0;i < left; i++) {
//			printf("%c", arr[i]);
//        }
//		for (int i = left; i < right; i++) {
//			printf("%c", ch);
//		}
//		for (int i = right; i < strlen(arr); i++) {
//			printf("%c", arr[i]);
//		}
//		left++;
//		right--;
//		printf("\n");
//	}
//	return 0;
//}

//int main() {
//	char arr1[] = "welcome to mininglamp!!!";
//	char arr2[] = "########################";
//	int left = 0;
//	int right = strlen(arr1) -1;
//	//int right = sizeof(arr）/sizeof(arr[0]) - 1 //error  -2
//	while (left <= right) {
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls"); // clear screen
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}


/*
子数组和的最大值
时间复杂度O(n*(n+1)/2)
*/
//int main() {
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5 };
//	int max_sum = -_CRT_INT_MAX;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		int sum = 0;
//		for (int j = i; j < sizeof(arr) / sizeof(int); j++) {
//			sum += arr[j];
//			max_sum = sum > max_sum ? sum : max_sum;
//		}
//	}
//	printf("the max sum is: %d", max_sum);
//	return 0;
//}

/*
子数组和的最大值
时间复杂度O(n)
*/
//int main() {
//
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5, 6 };
//	int max_sum = arr[0];
//	int sum_left = 0;
//	int sum_right = 0;
//	for (int left = 0, right = sizeof(arr) / sizeof(int) - 1; left <= right; left++, right--) {
//		if (sum_left >= 0) {
//			sum_left += arr[left];
//			max_sum = sum_left > max_sum ? sum_left : max_sum;
//		}
//		if (sum_left < 0) {
//			sum_left = 0;
//		}
//		if (sum_right >= 0) {
//			sum_right += arr[right];
//			max_sum = sum_right > max_sum ? sum_right : max_sum;
//		}
//		if (sum_right < 0) {
//			sum_right = 0;
//		}
//		if (left == right - 1) {
//			if (sum_left >= 0 && sum_right >= 0) {
//				max_sum = sum_right + sum_left;
//			}
//			else if (sum_left < 0 && sum_right >= 0) {
//				max_sum += sum_right;
//			}
//			else if (sum_left >= 0 && sum_right < 0)
//			{
//				max_sum += sum_left;
//			}
//		}
//		if (left == right) {
//			if (arr[left] >= 0) {
//				max_sum = sum_right + sum_left - arr[left];
//			}
//			else if (arr[left] < 0) {
//				max_sum = max_sum > arr[left] ? max_sum : arr[left];
//			}
//		}
//	}
//	printf("the max sum is: %d", max_sum);
//	return 0;
//}


//int main() {
//	int arr[] = { 1, -2, 3, 10, -4, 7, 2, -5, 6 };
//	//int arr1[] = { 1, -2, 13, -4, 9, -5 };
//	int max_sum = -_CRT_INT_MAX;
//	int sum = 0;
//	int z = 0;
//	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
//		if (arr[i] >= 0) {
//			if (-arr[i + 1] > arr[i + 2]) {
//				max_sum += arr[i];
//				int sum = 0;
//				continue;
//			}
//			sum += arr[i];
//		}
//		if (arr[i] < 0 && 0 != z) {
//			if (-arr[i] > arr[i + 1]) {
//				int sum = 0;
//				continue;
//			}
//			if (-arr[i] <= arr[i + 1]) {
//				sum += arr[i];
//			}
//		}
//		if (arr[i] < 0 && 0 == z) {
//			continue;
//		}
//		z++;
//		max_sum = sum > max_sum ? sum : max_sum;
//	}
//	printf("the max sum is: %d", max_sum);
//	return 0;
//}