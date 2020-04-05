#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//
//
//	//int a = 10;
//	//int *pa = &a;
//	/*char a[] = "nihao";
//	char *p = &a;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", *(p + i));*/
//	//}
//	//char*p = "nihao";
//	//printf("%s\n", p);
//{
//	char a[] = "nihao";
//	char*p = &a;
//	printf("%c\n", *p);
//	return 0;
//}
//void my_print(int * str, int sz)
//{
//	
//	//1 2 3 4 5 6 7 8 9 10
//	int i = 0;
//	for (i = 0; i <= sz; i++)
//	{
//		if (str[i] % 2 != 0)
//		{
//			continue;
//		}
//		else
//		{
//			str[i] ^= str[sz];
//			str[sz] ^= str[i];
//			str[i] ^= str[sz];
//			sz--;
//			i--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("请输入一个整数数组：》");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	my_print(arr, sz);
//	int n = 0;
//	for (n = 0; n <= sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}
//	return 0;
//}



//void my_print(int  arr[], int sz)
//{
//	int left = 0;
//	int right = sz;
//	while (left < right)
//	{
//		if
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0 };
//	printf("请输入一个整数数组：》");
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
//	my_print(arr, sz);
//	/*int n = 0;
//	for (n = 0; n <= sz; n++)
//	{
//		printf("%d ", arr[n]);
//	}*/
//	return 0;
//}
//int g_val = 100;
//int test(int x, int y)
//{
//	int z = x + y;
//	return z;
//
//}
//
//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	int sum = test(2, 3);
//
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//
//	for (i = 10; i < 20; i++)
//	{
//		arr[i] = i;
//
//	}
//
//	return 0;
//}
void test2()
{
	printf("heh");

}
void test1()
{
	test2;

}
void test()
{
	test1;
}

int main()
{
	test();
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int  main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	unsigned long pulArray[] = { 6, 7, 8, 9, 10 };
//	unsigned long *pulptr;
//	pulptr = pulArray;
//	*(pulptr + 3) += 3;
//	printf("%d,%d\n", *pulptr, *(pulptr + 3));
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int i = 0;
//	int m = 0;
//	printf("请输入一个数组：》");
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	int * pa = arr;
//	for(m = 0;m < 5;m++)
//	{
//	printf("%d ",*(pa+m));
//	}
//	return 0;
//}
//#include<string.h>
//void get_str(char arr[], int len)
//{
//	char *left = arr;
//	char *right = arr + len;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//	/*char *pa = arr;
//	for (int i = 0; i <= len; i++)
//	{
//		printf("%c ", *(pa + i));
//	}*/
//}
//int main()
//{
//	char  arr[] = "argbgdg";
//	int len = strlen(arr) -1;
//	get_str(arr, len);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	printf("请输入一个数字：》");
//	scanf("%d", &a);
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		b = b * 10 + a;
//		sum = sum + b;
//	}
//	printf("%d \n", sum);
//	return 0;
//}



int my_count(int i)
{
	int count = 0;
	if (i / 10 != 0)
	{
		return 1 + my_count(i / 10);
	}
	else if (i / 10 == 0)
	{
		return 1;
	}
}
int my_sum(int i, int count)
{
	int tmp = i;
	int sum = 0;
	while (tmp)
	{
		tmp = i % 10;
		sum = sum + my_ch(tmp, count);
		tmp = tmp / 10;
	}
	return sum;

}
int my_ch(int tmp, int count)
{
	if (count > 0)
		return tmp*my_ch(tmp, count - 1);
	else
		return 1;;
}
int main()
{
	int i = 0;

	/*scanf("%d", &i);*/
	for (i = 0; i < 100000; i++)
	{
		int count = my_count(i);
		int sum = my_sum(i, count);
		if (sum == i)
			printf("%d ", i);
	}


	/*	printf("%d \n", count);*/
	return 0;
}




//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 7; i++)
//	{
//		int j = 0;
//		for (j = 7-i; j > 0; j--)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 6; i > 0; i--)
//	{
//		int j = 0;
//		for (j = 0; j <= 6 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i - 1; j++)
//		{
//			printf("*");
//
//		}
//		printf("\n");
//	}
//	printf("");
//
//	return 0;
//}
