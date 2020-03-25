
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_prime(int n)
//{
//	//判断是否是素数
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//		
//	}
//	return 1;
//}
//
////实现一个函数，判断一个数是不是素数。
////利用上面实现的函数打印100到200之间的素数。
//int main()
//{
//	int i = 0;
//	int   count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d  ", i);
//			count++;
//		}
//	}
//	printf("%d", count);
//	return 0;
//}
//判断是不是闰年


//int is_year(int n)
//{ 
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//		scanf("%d", &year);
//		if (is_year(year) == 1)
//		{
//			printf("%d是闰年\n", year);
//		}
//		else{
//			printf("%d不是闰年\n",year);
//		}
//	return 0;
//
//}

//交换两个整数

//void swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap(int* pa, int* pb)
//{  //用来交换a，b
//	int tmp = 0;
//	tmp = *pa;
//	//*解引用操作符  等于 a = b;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数：");
//	scanf("%d %d", &a,&b);
//	printf("a=%d b=%d\n", a, b);
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	swap(&a,&b);//调用swap函数
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定

//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
//void daying(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{ 
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	printf("请输入数字：");
//	scanf("%d", &i);
//	daying(i);
//	return 0;
//}

///*int binary_search(int arr[], int k,int sz)
//{
//	int left = 0; 
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//	return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int k = 0;
//	int i = 0;
//	printf("请输入十个数字：");
//	
//	while (i < 10)
//	{ 
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	printf("请输入K：");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	
//	if (ret == -1)
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//int mian()
//{
//	unsigned int mum = 0;
//	scanf("%d", &num);
//	prin
//	return 0;
//}
int main()
{
	int arr[2] = { 12, 3 };
	printf("%d\n", sizeof(arr));
	return 0;
}