#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int  main()
//{
//
//	char arr[] = "bit";
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{   int arr[10] = { 0 };
//	int n = 0;
//	int key = 0;
//	int mid = 0;
//	printf("请输入一组有序数组：\n");
//		while (n < 10)
//	{
//		scanf("%d", &arr[n]);
//		n++;
//	}
//	printf("请输入key：");
//		scanf("%d", &key);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(0)-1;
//
//	while (left <= right)
//	{
//
//		 mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("找到了，下标是%d\n", mid);
//	else
//		printf("找不到了");
//
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	while (i <= n)
//	{
//		ret = ret*i;
//		i++;
//
//	}
//	printf("n的阶乘是：%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d的阶乘是：%d\n", n,ret);
//	return 0;
//} 
//int  main()
//{
//	int k = 0;
//	scanf("%d", &k);
//	int sum = 0;
//	int i = 1;
//	
//	int n = 1;
//	while (n <= k)
//	{
//		int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//		n++;
//		
//	}
//	printf("%d\n", sum);
//	return 0;
//}

  int main()
{	
	
	  int k = 0;
	printf("请输入k的值：" );
	scanf("%d", &k);
    int ret = 1;
	int sum = 0;
	int n = 0;
	for (n = 1; n <= k; n++)
	{
		ret = ret*n;
		sum = sum + ret;

	}
	printf("结果是：%d\n", sum);

     return 0;
}