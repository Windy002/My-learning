#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>


void Swap(int* lhs, int* rhs) //实现两个整形参数值交换
{
	int t = *lhs;

	*lhs = *rhs;
	*rhs = t;
}

int pow(int x)//求十的n次幂
{
	int i = 0;
	int sum = 1;
	if (x == 0)
		return sum;
	for (i = 1; i <= x; i++)
	{
		sum *= 10;
	}
	return sum;
}

int N(int x)//求阶乘
{
	int i = 0;
	int sum = 1;
	for (i = 1; i <= x; i++)
	{
		sum *= i;
	}
	return sum;
}

void FullPermutation(int source[], int ts[], int begin, int end)//找到所以的全排列并且存入ts数组中
{
	int i;
	static int n = 0;

	if (begin >= end) // 找到一个排列
	{
		for (i = 0; i < end; i++)
		{
			ts[n] += source[i]*pow(end-i-1);
		}
	}

	else// 没有找完一个排列，则继续往下找下一个元素
	{
		for (i = begin; i < end; i++)
		{
			if (begin != i)
			{
				Swap(&source[begin], &source[i]); // 交换
			}

			// 递归排列剩余的从begin+1到end的元素
			FullPermutation(source, ts, begin + 1, end);

			if (begin != i)
			{
				Swap(&source[begin], &source[i]); // 回溯时还原
			}
		}
	}
	if (ts[n] != 0)
		n++;
}

void sort_print(int ts[], int len)//排序并且打印
{
	int i = 0;
	for (i = 0; i < len - 1; i++)
	{
		int j = 0;
		for (j = 0; j < len - 1 - i; j++)
		{
			if (ts[j] < ts[j + 1])
			{
				int t = ts[j];
				ts[j] = ts[j + 1];
				ts[j + 1] = t;
			}
		}
	}
	for (i = 0; i < len; i++)
	{
		printf("%d\n", ts[i]);
	}
}
int main()
{
	int source[30];
	int ts[720] = {0};
	int i, count;

	scanf("%d", &count);

	// 初始化数组
	for (i = 0; i < count; i++)
	{
		source[i] = i + 1;
	}

	FullPermutation(source, ts, 0, count);
	sort_print(ts, N(count));
	return 0;
}


//#include <stdio.h>
//
///************************************************************************/
///* 功能：实现两个整形参数值交换
///* 参数：
///*       lhs--int类型的指针，指向待交换数1的地址
///*       rhs--int类型的指针，指向待交换数2的地址
///************************************************************************/
//void Swap(int* lhs, int* rhs)
//{
//	int t = *lhs;
//
//	*lhs = *rhs;
//	*rhs = t;
//}
//
///************************************************************************/
///* 功能：实现全排列功能
///* 参数：
///*       source--整数数组，存放需要全排列的元素
///*       begin --查找一个排列的开始位置
///*       end   --查找一个排列的结束位置，当begin=end时，表明完成一个排列
///************************************************************************/
//void FullPermutation(int source[], int begin, int end)
//{
//	int i;
//
//	if (begin >= end) // 找到一个排列
//	{
//		for (i = 0; i < end; i++)
//		{
//			printf("%d", source[i]);
//		}
//		printf("\n");
//	}
//	else// 没有找完一个排列，则继续往下找下一个元素
//	{
//		for (i = begin; i < end; i++)
//		{
//			if (begin != i)
//			{
//				Swap(&source[begin], &source[i]); // 交换
//			}
//
//			// 递归排列剩余的从begin+1到end的元素
//			FullPermutation(source, begin + 1, end);
//
//			if (begin != i)
//			{
//				Swap(&source[begin], &source[i]); // 回溯时还原
//			}
//		}
//	}
//}
//
//int main()
//{
//	int source[30];
//	int i, count;
//
//	scanf("%d", &count);
//
//	// 初始化数组
//	for (i = 0; i < count; i++)
//	{
//		source[i] = i + 1;
//	}
//
//	FullPermutation(source, 0, count);
//
//	return 0;
//}