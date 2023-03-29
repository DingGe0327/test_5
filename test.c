#define  _CRT_SECURE_NO_WARNINGS 1

// 字符串 转义字符 注释
//字符串就是一串字符，用双引号括起来的一串字符,以\0结尾，\0不算做字符串的内容
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));  //随机值
//	return 0;
//}

//转义字符：改变了原来字符的意思

#include <stdio.h>
#include <string.h>
int main()
{
	//printf("c:test\test.c\n");
	//printf("c:test\\test.c\n");
	//printf("%c\n", '\'');
	//printf("%s\n", "\"");
	//printf("\a");//警告字符，会让电脑响一下

	printf("%s\n", "\101");
	printf("%c\n", '\101');
	
	return 0;
}























