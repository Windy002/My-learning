#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


/*
int main()
{
	//���泣����
	72;
	3.1415926535;
	'C'; //�ַ�����
	"aabbcc";//�ַ�������
	//--���泣���������Ϊ������һ����򵥵�����ֵ��
	
	// ����--���Ա��޸�
	int a = 2;
	a = 7;//��7����a����a��2�ı����7��
	printf("%d\n", a);
	//--�����������Ϊ����һ���ռ䣬�������ɳ�������ֵ����
	
	// const ���εĳ� ����
	const float e = 2.71828;
	printf("%f\n", e);
	// �����e�� const ���εĳ������������Ǹ��������ǲ����Ա�ֱ���޸ĵģ�����
	// ���磺
	//e = 2.72; (error)--�����ǲ�����ֱ���޸ĵ�
	// --const���εĳ� �����������Ϊ��ֻ�ǰ�ĳ��ֵ�������ڸ��ռ�����ǲ�û�аѿռ���ֵ

	//֤��
	//const int n = 10;
	//int arr[n] = {0};

	return 0;
}
*/


////#define����ı�ʶ��������
//#define STR "qwert"
//int main()
//{
//#define G 9.8
//	printf("%s\n", STR);
//	float g = 0;
//	g = G;
//	printf("%.1f\n", g);
//
//	//֤����
//#define n 10
//	int arr[n] = { 0 };
//	return 0;
//}


//enum Color // enum��ö������ 
//{		   // ������һ��ö������ Color--��ԭɫ
//
//	//Color�����п���ȡֵ��
//	RED, //����Ϊ���ŷָ�
//	GREEN,
//	BLUE//���һ��ö�ٳ�����β���ñ��
//
//};
//
//enum Time
//{
//	Morning,
//	Afternoon,
//	Night 
//};
//
//int main()
//{
//	//��ʾ
//	int a = 2;
//	enum Color c = GREEN; //c�Ǵ�����һ��enum Color���͵ı��������ڴ�������һ���ռ�
//	// ���������ı��ʣ������ڴ�����һ��ռ�
//						  //������ռ�c����һ��GREEN��ֵ����ɫ��
//	enum Time t = Morning;
//	//��ӡ��ʾ��
//	printf("%d\n", GREEN);
//	printf("%d\n", Morning);
//	//GREEN = 7;
//	//Morning = 2;
//	return 0;
//}


//int main()
//{
//	printf("Good good study,");
//	printf("day day up\n");
//	char car[] = {'G','o','o','d','\0'};
//	char carr[] = {'s','t','u','d','y'};
//	printf("%s\n", car);
//	printf("%s\n", carr);
//	return 0;
//}

//
//
//int main()
//{
//	printf("D:\ts2019\ning.c");
//	return 0;
//}


////�������ʲô��
//int main()
//{
//	printf("%d\n", strlen("c:\test\628\test.c"));
//	return 0;
//}


//int main()
//{
//	//����ĸ��
//	// �����ڵı������£�\??)  -- >  ]  ( \??) �ᱻ����Ϊ  ] )
//	// �����ڵı������£�\??(  -- >  [  ( \??) �ᱻ����Ϊ  ] )
//	return 0;
//}


int func1(int x, int y)
{
	return x * y;
}

/*C���Է��ע��
int func2(int x, int y)
{
return x / y;
}
*/

//int main()
//{
////C++ע�ͷ��
////	int e = 7;
//// 	int b = 2;
////	����func1����
//	printf("%d\n", func1(2, 3) );
//	return 0;
//}


//int main()
//{
//	printf("��Ҫѧϰ\n");
//	printf("��ѡ��1.���Ŭ�� 0.�������\n");
//	int Learning = 0;
//	scanf("%d", &Learning);
//	if (Learning == 1)
//	{
//		printf("���Ŭ��:����и�н����������δ��!\n");
//	}
//	else
//	{
//		printf("����������ؼ�����!\n");
//	}
//	return 0;
//}


//int main()
//{
//	printf("��ʼѧϰ��\n");
//	int day = 0;
//	while (day < 4500)
//	{
//		printf("�������Ŭ������ѧϰ��\n");
//		day++;
//	}
//	if (day >= 4500)
//	{
//		printf("�����ˣ����������۷壡");
//	}
//	return 0;
//}


// ����
//int Add(int x, int y)
//{
//	return (x + y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int retu = 0;
//	printf("������������������>\n");
//	scanf("%d%d", &a, &b);
//	retu = Add(a, b);
//	printf("%d + %d = %d\n", a, b, retu);
//	return 0;
//}


// �����ʹ��
int main()
{
	int i = 0;
	int array[7] = { 1,2,3,4,5,6,7 };
	for (i = 0; i < 7; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	return 0;
}