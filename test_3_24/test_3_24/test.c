#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{ 
//	char input[20] = { 0 };
//	//�ػ�����
//	//shutdown -s -t 60;
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ�����һ����֮�ڹػ���������룺��������ȡ���ػ�\n");
//	printf("�����룺");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{ 
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//
//	}
//	printf("%d\n", a);
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	while (i < 100)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		if (i / 10 == 9)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		i++;
//	}
//	printf("%d\n", count);
//	return 0;
//} 
//int main()
//{
//	int i = 0;
//	int k = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += k*(1.0 / i);
//		k = -k;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//��ʮ�������ֵ
//int main()
//{
//	int i = 0;
//	
//	int arr[10] = { 0 };
//	printf("������ʮ��������");
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int max = arr[0];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		}
//	printf("���ֵ�ǣ�%d\n", max);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", j, i, j*i);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//��1��2��3, 4����������ɶ��ٸ�������ͬ(��������) ��~~���ظ�����λ�������Ƕ���

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	printf("��������������֣�\n");
//	for (i = 1; i < 5; i++){
//		for (j = 1; j < 5; j++)
//		{
//			for (k = 1; k < 5;k++)
//			if (i != j&&i != k&&j != k)
//				printf("%d%d%d\n", i, j, k);
//		}
//	}
//
//	return 0;
//}
//int main()
//{
//	long int i = 0;
//	int bonus1 = 0;
//	int bonus2 = 0;
//	int bonus4 = 0;
//	int bonus6 = 0;
//	int bonus10 = 0;
//	int bonus = 0;
//	scanf("%ld", &i);
//	bonus1 = 100000 * 0.1;
//	bonus2 = bonus + 100000 * 0.75;
//	bonus4 = bonus2 + 200000 * 0.5;
//	bonus6 = bonus4 + 200000 * 0.3;
//	bonus10 = bonus6 + 400000 * 0.15;
//	if (i <= 100000)
//		bonus = i * 0.1;
//	else if (i <= 200000)
//		bonus = bonus1 + (i - 100000)*0.075;
//	else if (i <= 400000)
//		bonus = bonus2 + (i - 200000)*0.05;
//	else if (i <= 600000)
//		bonus = bonus4 + (i - 4000000)*0.03;
//	else if (i <= 1000000)
//		bonus = bonus6 + (i - 600000)*0.015;
//	else
//		bonus = bonus10 + (i - 1000000)*0.01;
//	printf("bonus=%d", bonus);
//
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int x = 0;
//	int y = 0;
//	int z = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		x = sqrt(i + 100);
//		y = sqrt(i + 200);
//		if (x*x == (i + 100) && y * y == (i + 200))
//			printf("��������ǣ�%d\n", i);
//	
//	}
//	return 0;
//
//#include<string.h>
//int main()
//{
//	char arr1[20] = "##############";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//} 
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//
//}

//is_leap_year(int y)
//{
//	int n = 0;
//	if ((y % 4 == 0 || y % 100 != 0) && (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int
//	return 0;
//}

int binary_search(int arr[], int k ,int sz)
{
	int left = 0;
	int right = sz - 1;
	int mid = (left + right) / 2;
	while (left <= right)
    {
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
		return mid;
						}
	         }
return -1;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	scanf("%d", &k);
	int ret = binary_search(arr, k,sz);
	if (ret = -1)
	{
		printf("�Ҳ�����\n");
	}
	else {
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);

	}
	return 0;
}
