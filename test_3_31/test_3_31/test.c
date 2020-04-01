#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(){
//	printf("The size of short is %d bytes.\n", sizeof(short));
//	printf("The size of int is %d bytes.\n", sizeof(int));
//	printf("The size of long is %d bytes.\n", sizeof(long));
//	printf("The size of long long is %d bytes.", sizeof(long long));
//	return 0;
//}
//int main()
//{
//	int val = 1234;
//	printf("%#0o %#0x\n", val, val);
//	return 0;
//}
//int main()
//{
//	int a = ABCDEF;
//	printf("%d \n", a);
//	return 0;
//}
#include<string.h>
int main()
{
	char arr1[] = "abc";
	int arr2[10] = {1,3,4,5,6,7,4,3,3,3};
	printf("%d\n", sizeof(arr1));
	printf("%d\n", strlen(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr2));
		return 0;
}