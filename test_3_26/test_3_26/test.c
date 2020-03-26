#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归方式实现打印一个整数的每一位

//void output(unsigned int num)
//{
//	if (num > 9)
//	{
//		output(num / 10);
//	}
//	printf("%d ",num % 10);
//
//
//}
//
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &num);
//	output(num);
//
//	return 0;
//}
////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
////非递归
////int main()
////{
////	int n = 0;
////	printf("请输入一个数字：");
////	scanf("%d", &n);
////	int i = 0;
////	int ret = 1;
////	for (i = 1; i <= n; i++)
////	{
////		ret = ret * i;
////	}
////	printf("n! = %d\n", ret);
////	return 0;
////}
////递归
//int dg_num(int num)
//{
//	if (num == 1)
//	{
//		return 1;
//	}
//	if (num ==0)
//	{
//		return 0;
//	}
//	else
//	{
//		return num * dg_num(num - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个大于零数字：");
//	scanf("%d", &n);
//	int num = dg_num(n);
//	printf("n! = %d\n", num); 
//	return 0;
//
//}
//递归和非递归分别实现strlen
//#include<string.h>
//int main()
//{
//	char arr[] = { 'h', 'e', 'l', 'l', 'o',0};
//	printf("%d", strlen(arr));
//
//
//	return  0;
//}
//数组名是首元素地址


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//
//}
//int main()
//{
//	char arr[] = "hello";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}
//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列。
//
//要求：不能使用C函数库中的字符串操作函数。
//int my_num(int n)
//{
//
//		int sum = 0;
//		int m = 0;
//		if (n != 0)
//		{
//			m = n % 10;
//			n = n / 10;
//			sum = m + my_num(n);
//		}
//		return sum;
//	
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个数字：");
//	scanf("%d", &num);
//	int sum = my_num(num);
//	printf("输出：%d\n", sum);
//	return 0;
//}
//int my_pf(int n, int k)
//{
//	if (k == 0)
//		return 1;
//
//
//	else
//		return n * my_pf(n, k - 1);
//
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入N：");
//	scanf("%d", &n);

//	printf("请输入K：");
//	scanf("%d", &k);
//	int sum = my_pf(n, k);
//	printf("最终结果=%d\n", sum);
//
//	return 0;
//
//}
char *reverse_string(char* p)
{
	int n = 0;
	char temp = 0;
	char *q;
	q = p;
	while (*p != 0)
	{
		n++;
		p++;
	}
	if (n > 1)
	{
		temp = q[0];
		q[0] = q[n - 1];
		q[n - 1] = '\n';
		reverse_string(q + 1);
		q[n - 1] = temp;
	}
	return q;
}
int main()
{
	char arr[] = "nijintianxiedaimalema";
	printf("原字符串是：%s\n",arr);
	printf("翻转后：%s\n", reverse_string(arr));

	return 0;
}


