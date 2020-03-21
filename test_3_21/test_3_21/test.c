#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
//int main()
//{
	/*int a = 0, b = 0;
	for (a = 1, b = 1; a <= 100; a++)
	{
		if (b >= 20) break;
		if (b % 3 == 1)
		{
			b = b + 3;
			continue;
		}
		b = b - 5;
	}
	printf("%d\n", a);*/

	/*int count = 0;
	int i = 0;
	for (i = 9; i < 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("9的个数为：%d\n", count);
	return 0;*/
//}


//求10 个整数中最大值
//int main()
//{
//	int arr[10] = {0};
//	printf("请输入数字：");
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//	
//	}
//	max = arr[0];
//	for (i = 1; i < 10;i++)
//		{
//		if (arr[i]>arr[0])
//			max = arr[i];
//		
//		}
//		printf("最大值：%d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//
//		{
//
//			printf("%d*%d=%d\t", j, i, i*j);
//		}
//		
//		printf("\n");
//
//	}
//
//	return 0;
//}
//int main()
//{
//	float a = 1.0;
//    int i= 1;
//	double sum = 0.0;
//	do{
//		
//		
//		sum = sum + (a / i);
//		a = a*(-1);
//		i++;
//	} while (i <= 100);
//     printf("%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 }; 
//	scanf("%d", arr);
//	printf("%d\n", arr);
//	return 0;
//}
//int  main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int ret = 0;
//
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		ret = a;
//		a = b;
//		b = ret;
//	}
//	if (a < c)
//	{
//		ret = a;
//		a = c;
//		c = ret;
//	}
//	if (b < c)
//	{
//		ret = b;
//
//		b = c;
//		c = ret;
//
//	}
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		//判断是否是三的倍数
//		if (i % 3 == 0)
//			printf("%d\n", i);
//		i++;
//	}
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int min = (a < b ? a : b);
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			printf("最大公约数：%d\n", min);
//			break; }
//		min--;
//
//	}
//	
//
//	return 0;
//}
//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	while (a%b )
//	{
//		int r = a % b;
//		a = b;
//		b = r;
//
//	}
//	printf("%d\n", b);
//
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	while (year <= 2000)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d\n", year);
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d\n", year);
//		}
//		year++;
//	}
//	return 0;
//}
//int main()
//{
//	int year = 1000;
//	while (year < 2000)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//			printf("%d\n", year);
//		year++;
//	}
//
//	return 0;

int main()
{
	int i = 100;
	while (i < 200)
	{
		//判断是否为素数
		int a = 2;
		for (a = 2; a < i; a++)
		{
			if (i%a == 0)
			
				break;
			}
		
		
		if (a == i)
		{
			printf("是素数：%d\n", i);
		}
		i++;
	}
	return 0;
}

