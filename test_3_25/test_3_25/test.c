
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int is_prime(int n)
//{
//	//�ж��Ƿ�������
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
////ʵ��һ���������ж�һ�����ǲ���������
////��������ʵ�ֵĺ�����ӡ100��200֮���������
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
//�ж��ǲ�������


//int is_year(int n)
//{ 
//	return ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0));
//}
//int main()
//{
//	int year = 0;
//	printf("��������ݣ�");
//		scanf("%d", &year);
//		if (is_year(year) == 1)
//		{
//			printf("%d������\n", year);
//		}
//		else{
//			printf("%d��������\n",year);
//		}
//	return 0;
//
//}

//������������

//void swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap(int* pa, int* pb)
//{  //��������a��b
//	int tmp = 0;
//	tmp = *pa;
//	//*�����ò�����  ���� a = b;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("����������������");
//	scanf("%d %d", &a,&b);
//	printf("a=%d b=%d\n", a, b);
//	//int tmp = 0;
//	//tmp = a;
//	//a = b;
//	//b = tmp;
//	swap(&a,&b);//����swap����
//	printf("a=%d b=%d", a, b);
//
//	return 0;
//}

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��

//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
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
//	printf("���������֣�");
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
//	printf("������ʮ�����֣�");
//	
//	while (i < 10)
//	{ 
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	printf("������K��");
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);
//	
//	if (ret == -1)
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
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