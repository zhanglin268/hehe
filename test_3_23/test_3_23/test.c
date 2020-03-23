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
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//
//	}
//
//	if (i = sz)
//	{
//		printf("找不到了：");
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("请输入十个连续数字：\n");
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	int k = 0;
//	printf("请输入key：");
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
//		printf("找到了，下标是：%d\n", mid);
//		break;
//	}
//}
//	if (left > right)
//	{
//		printf("找不到了\n");
//	}
//
//	return 0;
//}
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	//打印welcom to bit !!!!!!!!
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
//		Sleep(1000);//睡眠函数
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
//		printf("请输入密码：>");
//		scanf("%s", password);
//		//两个字符串比较大小不能直接用==，而应该用strcmp(),
//		if (0 == strcmp(password, "123456"))
//		{
//			printf("登录成功:\n");
//			break;
//		}
//		else{
//			printf("密码错误\n");
//		}
//		if (i == 3)
//		{
//			printf("三次密码错误，退出程序\n");
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
//{//生成一个随机数
//
//	int ret = rand()%100-1;
//	//printf("%d\n", ret);
//	//猜数字
//	while (1)
//	{
//		int guess = 0;
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了：");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了:");
//
//		}
//		else{
//			printf("猜对了\n");
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
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			
//			break;
//		case 0:
//			printf("退出游戏：\n");
//			break;
//		default:
//			printf("输入错误：\n");
//			break;
//		}
//		
//	} while (input);
//
//	return 0;
//}

