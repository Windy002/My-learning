#define _CRT_SECURE_NO_WARNINGS 1
//在另一个add.c文件里定义一个全局变量
int a = 2;



















//在另一个add.c文件里定义一个函数
static int Add(int x, int y)
{
	return x + y;
}