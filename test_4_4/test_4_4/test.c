#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int get_bottle(int money)
//{
//	int drink = money;
//	int full = money;
//	while (full > 1)
//	{
//		drink = drink + full / 2;
//		if (full % 2 != 0)
//		{
//			full = (full / 2) + 1;
//		}
//		else
//		{
//			full = full / 2;
//		}
//	
//	}
//	return drink;
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int sum_drink = get_bottle(money);
//	printf("%d\n", sum_drink);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int n = 0;
//	int sum = 0;
//	int b = 1;
//
//	for (n = 1; n <= i; n++)
//	{
//		b = b*n;
//		sum = sum +  b;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//
//}
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//
//	return 0;
//}
//void reverse(char *str)
//
//{
//	int len = strlen(str);
//	char* left = str;
//    //char* right = str;
//	char * right = str + len - 1;
//	char  tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//
//
//
//}
//int main()
//{
//	char arr[20] = {0};
//
//	gets(arr);
//	reverse(arr);
//	printf("%s\n", arr);
//
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int ret = 0;
//	int sum = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp /=10)
//		{
//			/*i /= 10;*/
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//
//		}
//		if (sum == i)
//		{
//			printf("%d\n", sum);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	 
//
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	return 0;
//}
   
//int main()
//{
//	/*int a = 10;
//	int* pa = &a;
//	int ** ppa = &pa;
//	return 0;
//*/
//
//	int arr[10] = { 0 };
//	char ch[5] = { 0 };
//	
//}
//
//struct stu
//{
//	char name[20]; 
//	char id[18];
//	short age;
//	char sex[5];
//
//};
//int main()
//{
//	struct stu s1;//学生对象
//	struct stu s2;
//
//	return 0;
//}
struct S
{
	int a;
	char c;
	char arr[10];
	double d;

};
//struct T
typedef struct T
{
	char buf[20];
	struct S s;
	int*p;
}T;
int main()
{
	//T sr;
	int a = 10;
	struct S s = { 100, 'w', "hihao", 3.23 };
	T st = { "hello", { 29, 't', "abcdef", 4.5 }, &a };

	T*pt = &st;
	printf("%s\n", pt->buf);
	printf("%d\n", pt->s.a);
	printf("%c\n", pt->s.c);
	printf("%s\n", pt->s.arr);
	printf("%lf\n", pt->s.d);
	printf("%d\n", *(pt->p));

	/*printf("%s\n", st.buf);
	printf("%d\n", st.s.a);
	printf("%c\n", st.s.c);
	printf("%s\n", st.s.arr);
	printf("%lf\n", st.s.d);
	printf("%d\n", *(st.p));*/

	return 0;
}
