#define _CRT_SECURE_NO_WARNINGS 1
#include <Stdio.h>
#include <math.h>
//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		if (num % 2 == 1)
//		{
//			printf("%d ", num);
//		}
//		num++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int num = 1;
//	while (num <= 100)
//	{
//		printf("%d ", num);
//		num += 2;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 2;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1 :
//		printf("s");
//		break;
//	case 2 :
//		printf("a");
//		break;
//	default :
//		printf("sss");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	char ch = ' ';
//	//scanf("%c", &ch);
//	ch = getchar();
//	char c = getchar();
//
//	//printf("%c\n", ch);
//	putchar(ch);
//	putchar(c);
//	return 0;
//}

//int main()
//{
//	char ch = ' ';
//	ch = getchar();
//	putchar(ch);
//	//char ch = ' ';
//	//scanf("%c", &ch);
//	//printf("%c", ch);
//	return 0;
//}


//作业4-12-1
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	scanf("%d %d %d", &num1, &num2, &num3);
//	if (num1 < num2)
//	{
//		int t = num1;
//		num1 = num2;
//		num2 = t;
//	}
//	if (num1 < num3)
//	{
//		int t = num1;
//		num1 = num3;
//		num3 = t;
//	}
//	if (num2 < num3)
//	{
//		int t = num2;
//		num2 = num3;
//		num3 = t;
//	}
//	printf("%d %d %d", num1, num2, num3);
//	return 0;
//}

//作业4-12-2
//int main()
//{
//	int num = 3;
//	while (num <= 100)
//	{
//		printf("%d ", num);
//		num += 3;
//	}
//	return 0;
//}

//作业4-12-3
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int GCD = 2;
//	if (num1 % num2 == 0)
//		GCD = num2;
//	else if (num2 % num1 == 0)
//		GCD = num1;
//	int min = (num1 < num2) ? num1 : num2;
//	int i = 2;
//	for (i = 2; i <= min; i++)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//			GCD = i;
//	}
//	printf("%d", GCD);
//	return 0;
//}


//作业4-12-4
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0) //四年一润 百年不润  
//			printf("%d ", year);
//		else if (year % 400 == 0)//四百年又润
//			printf("%d ", year);
//	}
//	return 0;
//}

//作业4-12-5
int main()
{
	int p_num[101] = { 0 };
	int i = 0;
	for (i = 0; i <=100 ; i++)
	{
		p_num[i] = i+100; //因为下标从零开始，所以加上100，使他们拥有相差100的关系
		if (p_num[i] % 2 == 0) //如果是偶数，则令这个元素为零，为零不打印
				p_num[i] = 0;
		int j = 0;
		for (j = 2; j <= sqrt(i + 100); j++) // 判断是否只能有被1或者本身整除,不是就赋值零
		{
			if ((i + 100) % j == 0)
				p_num[i] = 0;
		}
	}
	for (i = 0; i <= 100; i++) //元素为零不是素数，不打印
	{
		if (p_num[i] != 0)
			printf("%d ", p_num[i]);
	}
	return 0;
}