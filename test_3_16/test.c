#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()

	//int a = 45;
	//printf("%d\n", a);
	//printf("%d\n", strlen("abcdef"));
	//\32��������һ��ת���ַ�
	//printf("%d\n", strlen("c:\test\328\test.c"));
	//int num1 = 0;
// int num2 = 0;
	//int sum = 0;
	//printf("������������������");
	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num
	//int Add(int x, int y)
	//
	//{
	//	int z = x + y;
	//	return z;
	//}
	//int main()
	//{
	//int num1= 0;
	//int num2 = 0;
	//int sum= 0;
	//
	//scanf("%d%d", &num1,&num2);
	//sum = Add(num1, num2);
	//printf("%d\n", sum);
//
//int main()
//{
//	int arr[10] = { 1,  3, 4,  4, 55, 3, 5, 2, 6};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	//a = -a;
//	int arr[5] = { 0 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(double));
//	printf("%d  \n", sizeof(arr));

//	return 0;

//}
//int main()
//{
	//int a = 10;
	////10ռ��32������λ
	//int b = ~a;
	//printf("%d\n", b);
	//int b = --a;//����--
	//printf("%d%d\n", a, b);
	//printf("a=%d b=%d\n", a, b);
	//int a = (int)3.22;
	//printf("%d\n", a);
	//int a = 0;
	//int b = 5;
	//if (a||b)
		//printf("nihao\n");
	//int a = 19;
	//int b = 34;
	//int max = 0;
	//max = a < b ? a : b;
	//printf("%d\n", max);
	//int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9.10 };
	//printf("%d\n", arr[4]);
	//int a = 10;
	//int b = 20;
	//int a = 10;//�ֲ���������auto����
	//static���ξֲ�����
		//����ȫ�ֱ��� ֻ�����Լ����ڵ�.c�ļ���ʹ�� ����������Դ�ļ���ʹ��
		//���κ���
	/*	void test()
	{
		static	int a = 1;
			a++;
			printf("%d", a);
		}
	int main()
	{
		int i = 0;
		while (i < 10)
		{
			test();
			i++;

		}



		return 0;

	}*/
//extern �����ⲿ���ŵ�
//extern int g_val;
//int main()
//{
	//printf("%d\n", g_val);
	//return 0;

//}
 
//extern  int Add(int x, int y);
//int main()
//{
	//int/* a*/  = 10;
	//int b = 49;
	//int sum = 0;
	//sum = Add(a, b);
	//prin/*tf*/("%d\n", sum);
//#define ���峣����
//#define max 19;
//int main()
//{
	//int a = max;
	//printf("%d\n", a);
	//define �����
	


	//return 0;
//}
//int Max(int x, int y)
//{
	//return (x>y? x : y);
//}
//#define PSS(x,y) (x>y?x:y)

//int main()
//{
	//int a = 30;
	//int b = 58;
	//int max = Max(a, b);
	//printf("%d\n", max);
	//max = PSS(a, b);
	//printf("%d\n", max);
	//return 0;
//}
//int main()
//{
	//int a = 10;
	//int *p =& a;
	//printf("%p\n", &a);
	//printf("%p\n", p);
	//return 0;
//}
int main()
{
	int a = 10;
	int* pa = &a;
	*pa = 20;
	printf("%d\n", a);
	return 0;
}