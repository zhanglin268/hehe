#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int number1( unsigned int n)
//{
//	int count = 0;
//	
//	while (n)
//	{
//		
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = number1(num);
//	printf("%d\n", ret);
//
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 31; i++)
//	{
//		if ((num >> i & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int number1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int  num = 0;
//	scanf("%d", &num);
//	int ret = number1(num);
//		printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	int tmp = m^n;
//	int count = 0;
//	while (tmp)
//	{
//		tmp = tmp&(tmp -1);
//		count++;
//
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	int i = 0;
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//
//	}
//	printf("\n");
//	return 0;
//}
//int main()
//{ 
//	//int a = 10;
//	//int *pa = &a;
//	  
//
//	char ch = 'w';
//	int a = 10;
//	double d = 10.0;
//	char *pc = &ch;
//	int* pa = &a;
//	double *pd = &d;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pd));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	/*int* pa = &a;
//	*pa = 0;*/
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}
//int main()
//{
//	//int a = 0;//局部变量 -随机值 如果未初始化
//	int *p;
//	*p = 20;
//	 
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int * p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//#include<string.h>
//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//
//	} 
//	return end - start;
//
//}
//int main()
//{
//	/*int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	printf("%d\n", &arr[9] - &arr[0]);
//*/
//
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//
//	return 0;
//}


//int my_count(int i)
//{
//	int count = 0;
//	if (i / 10 != 0)
//	{
//		return 1 + my_count(i / 10);
//	}
//	else if (i / 10 == 0)
//	{
//		return 1;
//	}
//}
//int my_sum(int i, int count)
//{
//	int tmp = i;
//	int sum = 0;
//	while (tmp)
//	{
//		tmp = i % 10;
//		sum = sum + my_ch(tmp, count);
//		tmp = tmp / 10;
//	}
//	return sum;
//
//}
//int my_ch(int tmp, int count)
//{
//	if (count > 0)
//		return tmp*my_ch(tmp, count - 1);
//	else
//		return 1;;
//}
//int main()
//{
//	int i = 0;
//
//	/*scanf("%d", &i);*/
//	for (i = 0; i < 100000; i++)
//	{
//		int count = my_count(i);
//		int sum = my_sum(i, count);
//		if (sum == i)
//			printf("%d ", i);
//	}
//
//
//	/*	printf("%d \n", count);*/
//	return 0;
//}




int main()
{
	int i = 0;
	for (i = 1; i <= 7; i++)
	{
		int j = 0;
		for (j = 7-i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 6; i > 0; i--)
	{
		int j = 0;
		for (j = 0; j <= 6 - i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");

		}
		printf("\n");
	}
	printf("");

	return 0;
}