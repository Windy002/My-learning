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
//	��unsigned char ������Ϊuch, ����uchҲ��һ��������
//	typedef unsigned char uch;
//
//		�۲�num1��num2,������������������ʵ��һ����
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

//ʹ�ó���������Դ�ļ��ı�����Ҫ����������
//�������ñ��˵Ķ�����Ҫ�ͱ��˴��к�
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
//�����ⲿ����
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
//	//ȡnum��������ĵ�ַ
//	&num;
//	//ע��num��������4���ֽڣ�ÿ���ֽڶ��е�ַ��&��ַȡ�����ǵ�һ���ֽڵĵ�ַ����С�ĵ�ַ��
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
	char name[20];//����
	int age;//����
	char sex[7];//�Ա�
	char id[15];//ѧ��
};

int main()
{
	//�ṹ���ʼ��
	struct Stu s1 = { "����", 18, "��", "20012725" };
	struct Stu s2 = { "Lily", 19, "woman", "20020147" };
	//.Ϊ�ṹ���Ա���ʲ�����
	printf("Name:%s Age:%d Sex:%s Id:%s\n", s1.name, s1.age, s1.sex, s1.id);
	printf("Name:%s Age:%d Sex:%s Id:%s\n", s2.name, s2.age, s2.sex, s2.id);
	return 0;
}