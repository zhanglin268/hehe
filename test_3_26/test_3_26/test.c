#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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
//	printf("������һ��������");
//	scanf("%d", &num);
//	output(num);
//
//	return 0;
//}
////�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
////�ǵݹ�
////int main()
////{
////	int n = 0;
////	printf("������һ�����֣�");
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
////�ݹ�
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
//	printf("������һ�����������֣�");
//	scanf("%d", &n);
//	int num = dg_num(n);
//	printf("n! = %d\n", num); 
//	return 0;
//
//}
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include<string.h>
//int main()
//{
//	char arr[] = { 'h', 'e', 'l', 'l', 'o',0};
//	printf("%d", strlen(arr));
//
//
//	return  0;
//}
//����������Ԫ�ص�ַ


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
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������С�
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
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
//	printf("������һ�����֣�");
//	scanf("%d", &num);
//	int sum = my_num(num);
//	printf("�����%d\n", sum);
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
//	printf("������N��");
//	scanf("%d", &n);

//	printf("������K��");
//	scanf("%d", &k);
//	int sum = my_pf(n, k);
//	printf("���ս��=%d\n", sum);
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
	printf("ԭ�ַ����ǣ�%s\n",arr);
	printf("��ת��%s\n", reverse_string(arr));

	return 0;
}


