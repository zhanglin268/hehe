#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//
//	}
//
//	if (i = sz)
//	{
//		printf("�Ҳ����ˣ�");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������ʮ���������֣�\n");
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int k = 0;
//	printf("������key��");
//	scanf("%d", &k);
//	int left = 0;
//
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int mid = 0;
//	while (left<=right)
//	{
//		int mid = (right + left) / 2;
//	if (arr[mid] < k)
//	{
//		left = mid + 1;
//	}
//	else if (arr[mid]>k)
//	{
//		right = mid - 1;
//	}
//	else{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	//��ӡwelcom to bit !!!!!!!!
//	char arr1[] = "welcom to bit !!!!!!!!";
//	char arr2[] = "######################";
//	int len = strlen(arr1);
//	int left = 0;
//	int right = len - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//˯�ߺ���
//		system("cls");//
//		left++;
//		right--;
//	}
//		return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺>");
//		scanf("%s", password);
//		//�����ַ����Ƚϴ�С����ֱ����==����Ӧ����strcmp(),
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("��¼�ɹ�:\n");
//			break;
//		}
//		else{
//			printf("�������\n");
//		}
//		if (i == 3)
//		{
//			printf("������������˳�����\n");
//		}
//	}
//	return;
//}

//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//	printf("*********************************\n");
//	printf("********1.play  0.exit***********\n");
//	printf("*********************************\n");
//}
//
//void game()
//{//����һ�������
//
//	int ret = rand()%100-1;
//	//printf("%d\n", ret);
//	//������
//	while (1)
//	{
//		int guess = 0;
//		printf("�������:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´��ˣ�");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��:");
//
//		}
//		else{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int input = 0; 
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}

