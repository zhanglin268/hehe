#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
// + - * /
	//����
	////double a = 7.0 / 2;
	//printf("%lf\n", a);
	//int a = 7 % 2;
	//printf("%d\n", a);
	//��λ������
	//>> ���Ʋ�����
	//<< ���Ʋ�����
	//00000000 00000000 00000000 00001110
	//int a = 14;
	//int b = a >> 1;   //b = 7;
	//int a = -1;
	//10000000 00000000 00000000 00000001
	//11111111 11111111 11111111 11111110
	//11111111 11111111 11111111 11111111
	//int b = a >> 1;
	//printf("b = %d\n", b);
	//int a = 5;
	//00000000 00000000 00000000 00000101;
	//
	//int b = a << 1;
	//printf("b = %d\n", b);
	//return 0;
//}

//int main()
//{
	//int a = 3;
	//int b = 5;
	////int c = a | b;
	//int c = a^b;
	//00000000 00000000 00000000 00000011
	//00000000 00000000 00000000 00000101
	//00000000 00000000 00000000 00000001
	//00000000 00000000 00000000 00000111
	//00000000 00000000 00000000 00000110
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = 0;
//	printf("a = %d b = %d\n", a, b);
//	/*c = a;
//	a = b;
//	b = c;*/
//
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("%d \n", !a);
//	return 0;
//}
//int main()
//{
//	int a = -3;
//	int a = -a;
//
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa��һ��ָ����� ������int*
//	*pa = 30;//�����ò�����
//	printf("%d\n",a);
//	return 0;
//}
//int main()
//{
//	///*int a = 0;
//	//int arr[10] = { 0 };
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof(arr));
//	//printf("%d\n",sizeo f( int[10]));*/
//	int a = 10;
//	short s = 5;
//	printf("%d\n", sizeof(s = a + 3));
//	printf("%d\n", s);
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//	 
//}
//int main()
//{
//	int a = 3;
//	//00000000 00000000 00000000 00001101
//	//
//	a = a | (1 << 4);
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;
//	 
//	retrun 0;
//}
//int main()
//{
//	int a = (int )3.12;
//	//��Ŀ������
//
//	return 0;
//}

//struct stu
//{
//	char name[20];
//	int age;
//	int tele[14];
//	char sex[5];
//
//};
//int main()
//{
//	struct stu s = {"zhangsan",20,"15858y538","��"};
//
//	//strcpy(s.name, "zhangsan");
//	struct stu* ps = &s;
//	printf("%s\n", ps->name);
//	printf("%s\n", s.age);
//	 
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("������һ�����֣���");
//	scanf("%d", &a);
//	//00000000 00000000 00000000 00101101
//	return 0;
//}
//void print(int a)
//{
//	int i = 0;
//	printf("�����������У���");
//	for (i = 31; i >=0; i-=2)
//	{
//	
//		printf("%d ", ((a >> i) & 1));
//			}
//	printf("\n");
//	printf("����ż�����У���");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		
//		printf("%d ", ((a >> i) & 1) );
//	}
//	printf("\n");
////00000000 00000000 00000000 00001101
////00000000 00000000 00000000 00000001
//
//}
//int main()
//{
//	int a = 0;
//	printf("������һ�����֣���");
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//00000000 00000000 00000000 00000111
//ͳ�ƶ�������1�ĸ���
//int get_count(int a)
//{
//	//00000000 00000000 00000000 00000111
//	//˼·����λ��
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	printf("������һ�����֣���");
//	scanf("%d", &a);
//	int ret = get_count(a);
//	printf("%d\n", ret);
//	return 0;
//
//}
int main()
{
	int a = 0;
	int b = 0;
	printf("�������������֣���");
	

	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a = %d b = %d\n", a, b);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//char reverse_string(char* p)
//{
//	int n = 0;
//	char temp = 0;
//	char *q;
//	q = p;
//	while (*p != 0)
//	{
//		n++;
//		p++;
//	}
//	if (n > 1)
//	{
//		temp = q[0];
//		q[0] = q[n - 1];
//		q[n - 1] = '\n';
//		reverse_string(q + 1);
//		q[n - 1] = temp;
//	}
//	return q;
//}
//char reverse_string(char* str)
//{
//	if (*str != '\0')
//	{
//		reverse_string(str + 1);
//		printf("%c ", *str);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "nijintianxiedaimalema";
//	printf("%s\n", arr);
//    printf("����������ַ���\n");
//	reverse_string(arr);
//	return 0;
//}
//int get_fbnq(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//			}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	printf("������һ�����֣�");
//	scanf("%d", &n);
//	int ret = get_fbnq(n);
//	printf("��n��쳲��������ǣ�%d\n", ret);
//	return 0;
//}

//int main()
//{
//	//int arr[10] = { 1, 2, 3 };
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	//int arr3[] = { 1, 2, 3 };
//	int i = 0;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		//printf("&arr[%d] = %p\n", i, &arr[i]);
//		printf("%d",arr[i]);
//
//	}
//	return 0;
//}

//void BubbleSort(int arr[]);
//int sz = sizeof(arr) / sizeof(arr[0]);
//int i = 0;
//for (i = 0; i < sz - 1; i++)
//{
//	int j = 0;
//	for ()
//
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	BubbleSort(arr);
//
//
//
//	return 0;
//}

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
//	printf("������һ���������飺\n");
//		while (n < 10)
//	{
//		scanf("%d", &arr[n]);
//		n++;
//	}
//	printf("������key��");
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
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	else
//		printf("�Ҳ�����");
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
//	printf("n�Ľ׳��ǣ�%d\n", ret);
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
//	printf("%d�Ľ׳��ǣ�%d\n", n,ret);
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

// /* int main()
//{	
//	
//	  int k = 0;
//	printf("������k��ֵ��" );
//	scanf("%d", &k);
//    int ret = 1;
//	int sum = 0;
//	int n = 0;
//	for (n = 1; n <= k; n++)
//	{
//		ret = ret*n;
//		sum = sum + ret;
//
//	}
//	printf("����ǣ�%d\n", sum);
//
//     return 0;
int main()
{
	int arr[2] = { 1, 2 };
	printf("%d\n", sizeof(arr));
	return 0;
}

