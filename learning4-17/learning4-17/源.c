#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int j = i;
//		while (j)
//		{
//			if ((j %= 10) == 9)
//			{
//				count++;
//				break;
//			}
//			else if ((j /= 10) == 9)
//			{
//				count++;
//				break;
//			}
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//
//int main()
//{
//	将unsigned char 重命名为uch, 所以uch也是一个类型名
//	typedef unsigned char uch;
//
//		观察num1和num2,这两个变量的类型其实是一样的
//		unsigned char ch1 = 'a';
//		uch ch2 = 'b';
//	return 0;
//}


//void test()
//{
//	static int j = 0;
//	j++;
//	printf("%d ", j);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}

//使用程序中另外源文件的变量需要进行声明，
//就像你用别人的东西需要和别人打招呼
//extern int a;
//
//int main()
//{
//	printf("%d", a);
//	return 0;
//}
//
//
//
//
//声明外部函数
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 2;
//	int b = 7;
//	int sum = Add(a, b);
//	printf("%d", sum);
//	return 0;
//}


//#define ADD(x,y) ((x)+(y)) 
//int main()
//{
//	int a = 2;
//	int b = 7;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int num = 7;
//	//取num这个变量的地址
//	&num;
//	//注：num是整型有4个字节，每个字节都有地址，&地址取出的是第一个字节的地址（较小的地址）
//	printf("%p", &num);
//	return 0;
//}

//int main()
//{
//	int num = 2;
//	int* pn = &num;
//	*pn = 20;
//	printf("%d", num);
//	return 0;
//}


//int main()
//{
//	char ch = 'a';
//	char* pch = &ch;
//	double dou = 1.2;
//	double* pdou = &dou;
//	int arr[10] = { 0 };
//	int* parr = &arr;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}

struct Stu
{
	char name[20];//姓名
	int age;//年龄
	char sex[7];//性别
	char id[15];//学号
};

int main()
{
	//结构体初始化
	struct Stu s1 = { "张三", 18, "男", "20012725" };
	struct Stu s2 = { "Lily", 19, "woman", "20020147" };
	//.为结构体成员访问操作符
	printf("Name:%s Age:%d Sex:%s Id:%s\n", s1.name, s1.age, s1.sex, s1.id);
	printf("Name:%s Age:%d Sex:%s Id:%s\n", s2.name, s2.age, s2.sex, s2.id);
	return 0;
}