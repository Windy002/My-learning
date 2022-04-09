#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
//利用函数关系
int main()
{
	int line = 0;
	scanf("%d", &line);
	assert(line % 2 != 0); //自己加上的，如果为偶数报错
	int i = 0; //控制循环次数
	for (i = 1; i <= line; i++) // 循环line次，打印line行
	{
		int j = 0;//j控制打印空格的循环
		if (i >= 1 && i <= line / 2 + 1) //分段函数，找到i和j的函数关系，所以j取值不一样
		{
			j = -i + (line / 2 + 1);
		}
		else
		{
			j = i - (line / 2 + 1);
		}
		for (; j > 0; j--)// 打印空格
		{
			putchar(' ');
		}
		int k = 0;//k控制打印*的循环
		if (i >= 1 && i <= line / 2 + 1)//分段函数，找到i和k的函数关系，所以k取值不一样
		{
			k = 2 * i - 1;
		}
		else
		{
			k = -2 * i + (2 * line + 1);
		}
		for (; k > 0; k--)// 打印*
		{
			putchar('*');
		}
		putchar('\n');
	}
}