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

