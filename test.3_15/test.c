#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int sum(int a)
//{
//	int c = 0;
//	static int b = 3;
//	c += 1;
//	b += 2;
//	return (a + b + c);
//}
//int main()
//{
//	/*int a =0 ;
//	int b = 0;
//	int max ;
//	scanf("%d%d", &a, &b);
//	max = (a > b)?(a) :(b);
//	printf("%d\n", max);
//	return 0;*/
//	int i;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d,", sum(a));
//	}
//
//
//}
int main()
{
	//char arr[] = "abc";//�ַ���   c�������һ�����ص�\0�ַ���������־
	//\0��ASCII��0
	//����arr[]={'a','b','c'};  ����û��\n
	//printf("%s\n", arr);

	//return 0;
	int arr[13] = { 2, 3, 2, 5, 4, 6, 6, 5, 4, 5, 6, 5, 3 };
	int i = 0;
	while (i < 13)
	{
		printf("%s\n", arr[i]);
			i++;
	}
	return 0;


}